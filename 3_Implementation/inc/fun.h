/**
 * @file fun.h
 * @author Nivesh (you@domain.com)
 * @brief Header file to include the Search fuction, compare function
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _FUN_H
#define _FUN_H

char *convertToLower (char *dest, char *src);

char *seperateNumbers (char *sep, long value); 


int searchValue (char *colourcode);


int compareString (char *string1, char *string2);

#endif
