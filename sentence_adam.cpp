/*
 * sentence_adam.cpp
 *
 *  Created on: Jun 3, 2021
 *      Author: Adam Peicheff
 */

#include <iostream>
#include <string>
#include <ctype.h>
#include "sentence_adam.h"

using namespace std;

// .cpp file that contains the functions to change letters to uppercase at the start of a sentence.

void capital_check_start(string input, string *inputPtr) {
    for (int i = 0; input[i] != '\0'; i++) // Creates a for loop that runs until "input[i]" == a null terminator.
    {
        if (isalpha(input[i]) != 0) // Checks if "input[i]" is a letter.
        {
            input[i] = toupper(input[i]); // Sets "input[i]" == to the uppercase version of "input[i]".
            break;
        }
    }
    *inputPtr = input;
}


void capital_check_middle(string input, string *inputPtr) // Declares "capital_check_middle" function.
{
    for (int i = 0; input[i] != '\0'; i++) {
        if ((input[i] == '.' or input[i] == '?' or
             input[i] == '!')) // Checks if "input[i]" == a period, question mark or exclamation mark.

        {
            for (int x = i;
                 input[x] != '\0'; x++) // Creates a nested for loop that checks for the first letter after punctuation.
            {
                if (isalpha(input[x]) != 0) {
                    input[x] = toupper(input[x]); // Sets "input[x]" == to the uppercase version of "input[x]".
                    *inputPtr = input;
                    break;
                }
            }
        }
    }
}












