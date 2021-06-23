//
// Created by Royce Demanou on 6/22/21.
//

#include <iostream>
#include <string>
#include <stdio.h>
#include "filter.h"

using namespace std;

//I realize that there are a lot of functions, but I did run into some problems so I seperated big functions into smaller ones so I could zone the errors in my code
//just helps me think better
void removeChar(string &word, const int removeIndex) {
    char temp;

    //insertion sort algorithm to change string
    for (int i = 0; i < word.length(); i++) {
        temp = word[i + 1];

        if (i == removeIndex) {

            for (int j = i; j < word.length() - 1; j++) {

                word[i] = temp;
            }
        }
    }

    word.resize(word.length() + 1); //this will remove unwelcome char but will duplicate a char
    string wordPart1 = word.substr(0, removeIndex); //copy first part without extra char
    string wordPart2 = word.substr(removeIndex + 1, word.length()); //copy 2nd part without extra char
    word = wordPart1 + wordPart2; //put the chars together

}

//the next few function are just to separate the code and organize it
bool isControlCode(const char letter) {
    char controlCodes[] = {'\a', '\b', '\t', '\n', '\v', '\f', '\r', '\e'};
    for (char alpha : controlCodes) {
        if (letter == alpha)
            return true;
    }
    return false;
}

bool isPunc(const char letter) {
    char punctuation[] = {'.', ',', '!', ';', ':', '?', '-', '"', '(', ')'};
    for (char alpha : punctuation) {
        if (letter == alpha)
            return true;
    }
    return false;
}

bool isSpace(const char letter) {
    if (letter == ' ')
        return true;
    return false;
}

bool isLetter(const int temp) {
    if ((temp < 65 || temp > 90) && (temp < 97 || temp > 122)) //check if letter through ascii codes
        return false;

    return true;
}

bool isInvalid(const char letter) {
    int temp = (int) letter;
    if (!isLetter(temp) && !isControlCode(letter) && !isSpace(letter)
        && !isPunc(letter)) {
        return true;

    }
    return false;
}

void filterOneChar(const char *sentence, string &piece1) {
    string piece = sentence; //copy char to string so that it is easier to deal with
    for (int i = 0; i < piece.length(); i++) {
        char letter = piece[i];
        if (isInvalid(letter)) { //combine all needed conditions in one line
            removeChar(piece, i);        //if not then remove said char
            piece1 = piece;
            return;

        }
    }
    piece1 = sentence;
}

void filterChar(char *sentence) {

    string piece;
    for (int i = 0; i < strlen(sentence); i++) {
        filterOneChar(sentence, piece);
        strcpy(sentence, piece.c_str());
    }
    //got c_str() from: https://www.cplusplus.com/reference/string/string/c_str/

    strcpy(sentence, piece.c_str());        //copy string to char array

}