//
// Created by Royce Demanou on 6/22/21.
//
#include <iostream>
#include <string>
#include "countPunctuation.h"

using namespace std;

int countPunctuation(const char *piece) {
    int puncNum = 0;
    const string temp = piece;
    char punctuation[] = {'.', ',', '!', ';', ':', '?', '-', '"', '(',
                          ')'}; //came up with a list of acceptable punctuation
    for (char letter : temp) {
        for (char punc : punctuation) { //loop through every punctuation in the array and compare to current letter
            if (letter == punc) {
                puncNum++;
            }
        }
    }

    return puncNum;
}