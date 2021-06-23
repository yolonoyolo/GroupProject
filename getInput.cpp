//
// Created by Royce Demanou on 6/22/21.
//
#include <iostream>
#include <string>
#include "getInput.h"

using namespace std;

void getInput(string &input) {
    getline(cin, input);
    cout << input << endl;
}