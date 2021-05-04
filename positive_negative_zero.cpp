// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Tue/May4/2021
// This program is "Positive / Negative / 0" program


#include <iostream>


int main() {
    // this function checks if the integer number is Positive / Negative / 0


    int intNumber;


    // input
    std::cout << "Enter an integer:"
    << std::endl;
    std::cin >> intNumber;


    // process & output
    if (intNumber > 0) {
        // output
        std::cout << intNumber << " is a positive number." << std::endl;
    } else if (intNumber < 0) {
        // output
        std::cout << intNumber << " is a negative number." << std::endl;
    } else if (intNumber == 0) {
        // output
        std::cout << intNumber << " 0 is just a zero!" << std::endl;
    } else {
        // output
        std::cout << "no idea!" << std::endl;
    }


     std::cout << "\nDone." << std::endl;
}
