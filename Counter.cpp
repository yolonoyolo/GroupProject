//============================================================================
// Name        : Counter.cpp
// Author      : Harsh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <stdio.h>
#include <iostream>

using namespace std;

int counter(const char *str, int count) {
    while (*str != '\0') { //WIll loop until it reaches null
        if (*str == ' ') { //In a sentence spaces will dignify a word has been there
            count++; //If spaces are there count will go up
        }
        str++; //Pointer will move to next cell
    }
    count++; //Counts the last word.
    return count; //Returns the variable

}

int count(char *input) {

    int count = 0;

    count = counter(input, count); //transfer to counter function

    cout << "The number of words in this piece is: " << count << " Words \n";

    return 0;
}
