#include "fun.h"
#include "conio.h"
#include "string.h"

int compareString (char *string1, char *string2)
{
    if (!string1 && !string2) return 0;
    if ( string1 && !string2) return 1;
    if (!string1 &&  string2) return -1;

    for (; *string1 && *string2 && *string1 == *string2; string1++, string2++) {}

    return *string1 - *string2;
}