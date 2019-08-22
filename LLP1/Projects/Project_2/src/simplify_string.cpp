
#include "headers/simplify_string.hpp"

#include <string>

using namespace std;

void simplify_string(string *s, bool change_to_lowercase)
{
        int n = s->size();
        int pos = 0;
        for (int i = 0; i < n; i++, pos++)
        {
                unsigned char c = (unsigned char)s->at(i);

                if (c >= 0x80)
                {
                        if (i < (n - 1) && (unsigned char)s->at(i + 1) >= 0x80)
                        {
                                unsigned char c2 = double_char(c, (unsigned char)s->at(i + 1), change_to_lowercase);

                                if (c2 < 0x80)
                                {
                                        s->at(pos) = c2;
                                        i++;

                                } // end if
                                else
                                {
                                        i++;

                                } // end else

                        } // end if

                        else
                        {
                                unsigned char c2 = single_char(c, change_to_lowercase);
                                if (c2 < 0x80)
                                {
                                        s->at(pos);
                                } // end if

                                else
                                {
                                        pos--;

                                } // end else

                        } // end else

                } // end if

                else
                {
                        if (change_to_lowercase && c >= 'A' && c <= 'Z')
                        {
                                s->at(pos) = c + ('a' - 'A');

                        } // end if

                        else
                        {
                                s->at(pos) = c;

                        } // end else

                } // end else

        } // end for

        if (pos < n)
        {
                s->resize(pos);

        } // end if

} // end simplify_string

unsigned char double_char(unsigned char c1, unsigned char c2, bool change_to_lowercase)
{
        if (c1 == 0xC2)
        {
                if (c2 == 0xAA) { return 'a'; }
                if (c2 == 0xBA) { return 'o'; }
                if (c2 == 0xA9) { return 'c'; }
                if (c2 == 0xAE) { return 'r'; }
        } // end if

        if (c1 == 0xC3)
        {
                if (c2 >= 0x80 && c2 <= 0x85) { return change_to_lowercase ? 'a' : 'A'; }
                if (c2 >= 0xA0 && c2 <= 0xA5) { return 'a'; }
                if (c2 >= 0x88 && c2 <= 0x8B) { return change_to_lowercase ? 'e' : 'E'; }
                if (c2 >= 0xA8 && c2 <= 0xAB) { return 'e'; }
                if (c2 >= 0x8C && c2 <= 0x8F) { return change_to_lowercase ? 'i' : 'I'; }
                if (c2 >= 0xAC && c2 <= 0xAF) { return 'i'; }
                if (c2 >= 0x92 && c2 <= 0x96) { return change_to_lowercase ? 'o' : 'O'; }
                if (c2 >= 0xB2 && c2 <= 0xB6) { return 'o'; }
                if (c2 >= 0x99 && c2 <= 0x9C) { return change_to_lowercase ? 'u' : 'U'; }
                if (c2 >= 0xB9 && c2 <= 0xBC) { return 'u'; }
                if (c2 == 0x87) { return change_to_lowercase ? 'c' : 'C'; }
                if (c2 == 0xA7) { return 'c'; }
                if (c2 == 0x91) { return change_to_lowercase ? 'n' : 'N'; }
                if (c2 == 0xB1) { return 'n'; }
                if (c2 == 0x9F) { return 's'; }
                if (c2 == 0x9D) { return change_to_lowercase ? 'y' : 'Y'; }
                if (c2 == 0xBD || c2 == 0xBF) { return 'y'; }

        } // end if

        if (c1 == 0xC5)
        {
                if (c2 == 0xBD) { return change_to_lowercase ? 'z' : 'Z'; }
                if (c2 == 0xBE) { return 'z'; }
                if (c2 == 0xB8) { return change_to_lowercase ? 'y' : 'Y'; }

        } // end if

        return c1;

}  // end double_char

unsigned char single_char(unsigned char c, bool change_to_lowercase)
{
        if ((c >= 0xC0 && c <= 0xC5) || (c >= 0xE1 && c <= 0xE5) || c == 0xAA)
        {
                return ((c >= 0xC0 && c <= 0xC5) && !change_to_lowercase) ? 'A' : 'a';

        } // end if

        if ((c >= 0xC8 && c <= 0xCB) || (c >= 0xE8 && c <= 0xEB))
        {
                return (c > 0xCB || change_to_lowercase) ? 'e' : 'E';

        } // end if

        if ((c >= 0xCC && c <= 0xCF) || (c >= 0xEC && c <= 0xEF))
        {
                return (c > 0xCF || change_to_lowercase) ? 'i' : 'I';

        } // end if

        if ((c >= 0xD2 && c <= 0xD6) || (c >= 0xF2 && c <= 0xF6) || c == 0xBA)
        {
                return ((c >= 0xD2 && c <= 0xD6) && !change_to_lowercase) ? 'O' : 'o';

        } // end if

        if ((c >= 0xD9 && c <= 0xDC) || (c >= 0xF9 && c <= 0xFC))
        {
                return (c > 0xDC || change_to_lowercase) ? 'u' : 'U';

        } // end if

        if (c == 0xA9 || c == 0xC7 || c == 0xE7)
        {
                return (c == 0xC7 && !change_to_lowercase) ? 'C' : 'c';

        } // end if

        if (c == 0xD1 || c == 0xF1)
        {
                return (c == 0xD1 && !change_to_lowercase) ? 'N' : 'n';

        } // end if

        if (c == 0xAE)
        {
                return 'r';

        } // end if

        if (c == 0xDF)
        {
                return 's';

        } // end if

        if (c == 0x8E || c == 0x9E)
        {
                return (c == 0x8E && !change_to_lowercase) ? 'Z' : 'z';

        } // end if

        if (c == 0x9F || c == 0xDD || c == 0xFD || c == 0xFF)
        {
                return ((c == 0x9F || c == 0xDD) && !change_to_lowercase) ? 'Y' : 'y';

        } // end if

        return c;

} // end double_char
