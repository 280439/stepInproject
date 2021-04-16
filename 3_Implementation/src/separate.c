/**
 * @file separate.c
 * @author Nivesh (you@domain.com)
 * @brief Function to separate the higher order resistance value entered
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "fun.h"
#include "string.h"
#include "stdio.h"


char *seperateNumbers (char *sep, long val)
{
    char numarray[5 * 12] = "";
    char *ptr = numarray;
    size_t i = 0, length = 0;

    sprintf (numarray, "%ld", val);
    for (; *ptr; ptr++) {}
    length = ptr - numarray;
    ptr = sep + 5 * 12 - 2;
    while (length--) {
        if (i++ == 3) {
            i = 1;
            *ptr-- = ' ';
        }
        *ptr = numarray[length];
        if (length) ptr--;
    }
    for (i = 0; *ptr; ptr++, i++) sep[i] = *ptr;
    sep[i] = *ptr;    
    return sep;
}
