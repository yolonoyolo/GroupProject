//============================================================================
// Name        : Group_project.cpp
// Author      : Adam Peicheff
// Version     :
// Copyright   : Your copyright notice
// Description : Temporary main.cpp
//============================================================================

#include <iostream>
#include <string>
#include "letter_adam.h"//Adam
#include "sentence_adam.h"//Adam
#include "Counter.h" //Harsh's edit
#include "First-LastWord.h" //Harsh's edit
#include "CapLetter.h" //Harsh's edit
#include "filter.h"//Royce
#include "getInput.h"//Royce
#include "countPunctuation.h"//Royce

using namespace std;

int main() {
    string input;//Adam
    string inputPtr;//Adam
    cout << "Please enter a string: ";//Adam

    getInput(input);//Royce

    char *chinput = &input[0];//Harsh

    filterChar(chinput);//Royce
    input = chinput;//Royce

    capital_check_start(input, &inputPtr); // calls "capital_check_start" function. Adam
    input = inputPtr; // Sets "input" = to the altered sentence (inputPtr). Adam

    capital_check_middle(input, &inputPtr); // Calls "capital_check_middle" function. Adam
    input = inputPtr; // Sets "input" = to the altered sentence (inputPtr). Adam

    /*On this line of code is meant to copy the string into a char this was taken
    to adapt with our code from https://www.geeksforgeeks.org/convert-string-char-array-cpp/  -Harsh*/


    count(chinput); //Harsh's edit
    CapLetter(chinput); //Harsh's edit
    search(chinput); //Harsh's edit


    cout << "Your piece has " << count_letter(input) << " letters and "
         << count_vowels(input) << " vowels." << endl;// Harsh
    //Outputs the return values of the "letter_counter" and "vowel_counter" functions.
    cout << "There is/are " << countPunctuation(chinput) << " punctuation(s) in this piece" << endl;//Royce


    cout << "This is the edited string: ";
    cout << input
         << endl; // Outputs the "input" array with the correct changes made to the capitalization at the start of a sentence.
    return 0;
}