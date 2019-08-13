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

#ifndef MISC_H
#define MISC_H

#define WHITE 0
#define RED 1
#define GREEN 2
#define YELLOW 3
#define BLUE 4
#define MAGENTA 5
#define CYAN 6

void print_div(int color);
void clear();
void screen_clean();
void endl();
void change_color(int color);
void colorful_write(char string[100], int color);
void str_to_lower(char *string);
void str_to_upper(char *string);

#endif /* misc.h */
