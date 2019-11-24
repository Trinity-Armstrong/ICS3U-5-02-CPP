// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: November 2019
// This program calculates the area of a triangle

#include <stdlib.h>
#include <iostream>

void Calculate(float base, float height) {
    // This function calculates the area of a triangle

    // Variables
    float area;

    // Process
    area = (base*height)/2;

    // Output
    std::cout << "" << std::endl;
    std::cout << "The area of the triangle is " << area << "cm²." << std::endl;
}

int main() {
    // This function gets the base and height then calls the calculate function

    // Variables
    int baseFromUser;
    int heightFromUser;
    std::string baseAsString;
    std::string heightAsString;
    
    // Introduction
    std::cout << "We will be calculating the area of a triangle." << std::endl;

    // Input
    while (true) {
        std::cout << "Enter the base in cm (integer):" << std::endl;
        std::cin >> baseAsString;
        std::cout << "Enter the height in cm (integer):" << std::endl;
        std::cin >> heightAsString;

        try {
            baseFromUser = std::stoi(baseAsString);
            heightFromUser = std::stoi(heightAsString);
            Calculate(baseFromUser, heightFromUser);
            if (baseFromUser == std::stoi(baseAsString) && \
                heightFromUser == std::stoi(heightAsString)) {
                break;
            } else {
                std::cout << "Error! Try again." << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "" << std::endl;
            std::cout << "Error! Try again." << std::endl;
            std::cout << "" << std::endl;
        }
    }
}