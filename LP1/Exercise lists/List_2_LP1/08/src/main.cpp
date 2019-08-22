/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
        std::fstream file;

        std::string singleLine, text;

        file.open("files/OriginalFile.txt", ios::in);

        while(file.peek() != EOF)
        {
                std::getline(file, singleLine);

                text += singleLine + "\n";

        } // end while

        file.close();

        file.open("files/BkpFile.txt", ios::out);

        file << text;

        file.close();

}  // end main
