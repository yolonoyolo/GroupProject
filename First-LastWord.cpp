//============================================================================
// Name        : First-LastWord.cpp
// Author      : Harsh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <stdio.h>

using namespace std;

void lastword(const char *str, string last[]) {

    while (*str != '\0') //This loop will move the pointer to the last letter before \0
        str++;

    while (*str != ' ') { //This loop will move the pointer back to the first letter of the last word.
        str--;
    }
    str++;
    for (int i = 0;; i++) {
        if (*str == '\0') //In case the sentence has punctuation, it will stop at either . ? or !
            break;

        if (*str == '.')
            break;
        if (*str == '!')
            break;
        if (*str == '?')
            break;
        last[i] = *str;    //This loop will copy the last word into the "last" string
        str++;

    }

}

void firstword(const char *str, string first[]) {

    for (int i = 0;; i++) { //The for loop will copy the pointer into the "first" string

        if (*str == ' ') //Check if pointer reaches a space so it can break
            break;

        first[i] = *str;
        str++;

    }

}

int search(char *str) {

    int size = strlen(str);

    //I changed these two lines because there was an error with the compiler
    //the strings need to be allocated dynamically
    //Changed here
    string first[size];
    string last[size]; //initialize new string with the constant size.
    firstword(str, first);
    lastword(str, last); //Move into functions

    cout << "The first word is: ";    //Prints out first word
    for (int i = 0; i < size; i++) {
        cout << first[i];
    }

    cout << endl << "The last word is: "; //Prints out last word
    for (int i = 0; i < size; i++) {

        cout << last[i];
    }
    cout << endl;

    return 0;
}
