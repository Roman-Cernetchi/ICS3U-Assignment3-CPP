// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Roman Cernetchi
// Created on: December 2020
// This program checks which number is higher, lower and/or equal

#include <iostream>
#include <cmath>


int main() {
    // this function checks which number is higher, lower and/or equal
    int first_number;
    int second_number;

    // input
    std::cout << "Enter the first number you have chosen: ";
    std::cin >> first_number;
    std::cout << "Enter the second number you have chosen: ";
    std::cin >> second_number;
    std::cout << "" << std::endl;

    // process
    if (first_number < second_number) {
        // output
        std::cout << first_number << " < " << second_number << std::endl;
    } else if (first_number > second_number) {
        // output
        std::cout << first_number << " > " << second_number << std::endl;
    } else {
        // output
        std::cout << first_number << " = " << second_number << std::endl;
    }
}
