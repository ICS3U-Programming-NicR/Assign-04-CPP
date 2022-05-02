// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on:April 25 2022
// This program makes a random number game

#include <stdlib.h>
#include <iostream>

using std::cout;
using std::cin;
using std::string;
#include "colours/colors.h"

int main() {
    string repeatNumStr, userNumStr, tryAgain;
    int repeatNum, userNum;
    cout << CYAN << "Enter the amount of times you want to repeat the "\
    "multiplication table: ";
    cin >> repeatNumStr;
    while (true) {
        cout << CYAN << "Enter the number you  want to multiply: ";
        cin >> userNumStr;
        try {
            repeatNum = std::stoi(repeatNumStr);
            userNum = std::stoi(userNumStr);
            if (userNum > 0 && repeatNum > 0) {
                for (int counter = 0; counter <= repeatNum; counter ++) {
                    cout << GREEN << userNum << " * " << counter <<\
                    " = " << userNum * counter << "\n";
                }
            } else {
                cout << RED << "you have to enter an integer greater than 0\n";
            }
        } catch (std::invalid_argument) {
            cout << RED << "you have to enter an integer\n";
        }
        cout << RED << "Enter the amount of times you want to repeat the "\
        "multiplication table: ";
        cin >> repeatNumStr;
        continue;
    }
}
