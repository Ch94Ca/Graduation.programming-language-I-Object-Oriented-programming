/*
 *   CRUD State Agency System
 *
 *    Module: Miscellaneous
 *
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "headers/misc.h"

void print_div(int color) // Print a dividing line
{
        change_color(color);
        puts("---------------------------------------------------------------------------------------");

} // End print_div

void screen_clean() // Clean screen text
{
    #ifdef __linux__
        //system("clear");
        //printf("\033[H\033[J");
        system ("tput clear");
    #elif _WIN32
        system("cls");
    #endif

} // End screen_clean

void endl() // End line
{
        printf("\n");

} // end endl

void change_color(int color) // Change text color
{
        switch(color)
        {

        case 0: // Default
                printf("\033[0m");
                break;
        case 1: // Red
                printf("\033[0;31m");
                break;
        case 2: // Green
                printf("\033[0;32m");
                break;
        case 3: // Yellow
                printf("\033[0;33m");
                break;
        case 4: // Blue
                printf("\033[0;34m");
                break;
        case 5: // Magenta
                printf("\033[0;35m");
                break;
        case 6: // Cyan
                printf("\033[0;36m");
                break;

        } // End Switch

} // End change_color

void colorful_write(char string[100], int color) // Write a colorful string
{
        change_color(color);
        printf("%s", string);

} // End colorful_write

/*
   void str_to_lower(char *string) // Set all string characters to lowercase
   {
        while(*string)
        {
 * string = tolower(*string);
 * string++;

        } // End While

   } // End str_to_lower
 */

void str_to_upper(char *string) // Set all string characters to uppercase
{
        while(*string)
        {
                *string = toupper(*string);
                *string++;

        } // End While

} // End str_to_upper
