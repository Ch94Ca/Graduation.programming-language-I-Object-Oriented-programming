/*
 *   Author: Carlos Henrique Silva Correia de Araujo
 *   UFPB Computer engineering student
 *   https://github.com/ch94ca
 *
 */

#ifndef NORMALIZE_STRING_HPP
#define NORMALIZE_STRING_HPP

#include <string>

void simplify_string(std::string* s, bool change_to_lowercase);
unsigned char double_char(unsigned char c1, unsigned char c2, bool change_to_lowercase);
unsigned char single_char(unsigned char c, bool change_to_lowercase);

#endif
