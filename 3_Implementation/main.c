/**
 * @file main.c
 * @author Nivesh (you@domain.com)
 * @brief Main function
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <string.h>

char state = 'Y'; 

enum {MinimumNumber = 5, MaximumNumber = 12};

    
unsigned int multiplier[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000,0.1,0.01};
float tolerance[] = {'\0',1,2,'\0','\0',0.5,0.25,0.1,0.05,'\0',5,10};

char *convertToLower (char *dest, char *src); //converts all to lower case
char *seperateNumbers (char *sep, long value); //puts space every 3rd digit
int searchValue (char *colourcode); //search the index values in colour codes
int compareString (char *string1, char *string2); //comarison between two strings


int main(void)
{
    int i,m,n,tol;
	int error = 0;
	int colour_val[MinimumNumber]; //stores the value in band
	
    char input[MinimumNumber][MaximumNumber]; //input by user
    char invalid[MinimumNumber][MaximumNumber]; //enteries which are invalid
	
    long resistance = 0; 
	
    char finalResistorValue[20] = "";//output
	
    do
    {
        //Input by the user
    printf("%s\n%s\n%s\n",
        " Enter the colours of the Five band resistor,",
        "Start with the last band(nearest to the end).",
        "Please Enter the colours in Uppercase letters only.");

    for (i = 0; i < MinimumNumber; ++i)
    {
        printf("Band %d : ", i + 1); // to print headers for each band
        scanf(" %s", &input[i]);  // to get the user input
        // converting the user input to index of colours
        colour_val[i] = searchValue(input[i]); 
    }       
    for (i = 0; i < MinimumNumber; ++i)
    {
        if (colour_val[i] == -1)
        {
            strcpy(invalid[i], input[i]);
            error++;
        }
    }
    if (error > 0)
    {
        if (error == 1)
        {
            printf("OOPS!! You Entered Invalid colour: %s\n", invalid[0]);
        }
        else if (error == 2)
        {
            printf("OOPS!! You Entered Invalid colours: %s, %s\n", invalid[0], invalid[1]);
        }
        else 
        {
            printf("OOPS!! You Entered Invalid colours: %s, %s, %s\n",
             invalid[0], invalid[1], invalid[2]);
        }
    }
    else
    {
        for (i = 0; i < MinimumNumber - 1; ++i)
        {
            resistance = (resistance * 10) + colour_val[i];
        }
         m = colour_val[3];
         n=colour_val[4];
        resistance *= multiplier[m];
        seperateNumbers (finalResistorValue, resistance);
        tol=tolerance[n];

        printf("Your Required Resistance value is : %s Ohms %d %% Tolerance value\n", finalResistorValue,tol);
		
        for (i = 0; i < MinimumNumber; ++i)
        {
            //printf("Input ==> %s\t", input[i]);
            //printf("index ==> %d\n", colour_val[i]);
        }
    }
    error = 0;
    resistance = 0;
    for (i = 0; i < MinimumNumber; ++i)
    {
        colour_val[i] = 0;
    }
	
    //asking user if they want to continue or not
    printf("Do you want to continue with another colour values?\n");
    scanf(" %c", &state);


    if (state == 'Y');
    else break;
	
	} while (state == 'Y');

    return 0;
}





