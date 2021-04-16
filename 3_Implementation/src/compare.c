/**
 * @file compare.c
 * @author Nivesh (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "fun.h"
#include "string.h"
/**
 * @brief 
 * 
 * @param string1 
 * @param string2 
 * @return int 
 */
int compareString (char *string1, char *string2)
{
    if (!string1 && !string2) return 0;
    if ( string1 && !string2) return 1;
    if (!string1 &&  string2) return -1;

    for (; *string1 && *string2 && *string1 == *string2; string1++, string2++) {}

    return *string1 - *string2;
    
}
