//============================================================================
// Name        : cpp.cpp
// Author      : Harsh Patel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void CapLetter(char *str) {
    int loop = 0; //Sets up loop function

    cout << "This function makes this sentence all CAPS: ";

    //it prints out the whole string twice idk why
    while (str[loop]) {
        cout << (char) toupper(str[loop]); //Each individual letter will get printed out one by one capitalized.

        loop++; //Set loop will go to next letter.

    }
    
    cout << endl;
}
