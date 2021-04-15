#include "fun.h"
#include "string.h"
#include "conio.h"


#define ItemsCount (sizeof items/sizeof *items)

enum resistor_colours {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GRAY, WHITE,GOLD,SILVER, UNKNOWN};


struct itemsList
 {
    char *itemName;
    enum resistor_colours id;
 } items[] = {
    {"BLACK", BLACK},
    {"BROWN", BROWN},
    {"RED", RED},
    {"ORANGE", ORANGE},
    {"YELLOW", YELLOW},
    {"GREEN", GREEN},
    {"BLUE", BLUE},
    {"VIOLET", VIOLET},
    {"GRAY", GRAY},
    {"WHITE", WHITE},
    {"GOLD",GOLD},
    {"SILVER",SILVER}
};

int searchValue (char *colourcode)
{
    int i; 
    for (i = 0; i < (int)ItemsCount; ++i) 
    if (*colourcode == *(items[i].itemName))
            if (!compareString(items[i].itemName,colourcode))
                return i;
    return -1;
}