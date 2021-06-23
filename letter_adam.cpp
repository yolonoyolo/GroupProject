/*
 * letter.cpp
 *
 *  Created on: Jun 3, 2021
 *      Author: Adam Peicheff
 */

#include <iostream>
#include <string>
#include <ctype.h>
#include "letter_adam.h"

using namespace std;

// .cpp file that contains the function to count the number of letters in a string.

int count_letter(string input) {
    int letter_counter = 0; // Sets "letter_counter" = 0.

    for (int i = 0;
         input[i] != '\0'; i++) // Creates a for loop that runs as long as "input[i]" does not = a null terminator.
    {
        if (isalpha(input[i]) != 0) // If the character in "input[i]" is a letter than "letter_counter" will go up by 1.
        {
            letter_counter++;
        }
    }
    return letter_counter; // Returns the value of "letter_counter".
}

int count_vowels(string input) {
    int vowel_counter = 0; // Sets "vowel_counter" = 0.

    for (int i = 0;
         input[i] != '\0'; i++) // Creates a for loop that runs as long as "input[i]" does not = a null terminator.
    {
        if (input[i] == 'a' or input[i] == 'A' or input[i] == 'e' or input[i] == 'E' or input[i] == 'i' or
            input[i] == 'I' or input[i] == 'o' or input[i] == 'O' or input[i] == 'u' or input[i] == 'U')
            // If the character in "input[i]" is a vowel than "vowel_counter" will go up by 1.
        {
            vowel_counter++;
        }
    }
    return vowel_counter; // Returns the value of "vowel_counter".
}

