// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: November 2019
// This is a program which determines the volume of a cylinder.

#include <iostream>
#include <cstdlib>
#include <cmath>


float Calculations(int radius, int height) {
    // this does the math
    float volume;

    volume = (M_PI * pow(radius, 2) * height);
    return volume;
}

main() {
    // this function just calls other functions

    std::string radiusAsString;
    int radius;
    std::string heightAsString;
    int height;
    float volume;

    while (true) {
        std::cout << "Input the radius of the cylinder: ";
        std::cin >> radiusAsString;
        std::cout << "Input the height of the cylinder: ";
        std::cin >> heightAsString;

        try {
            radius = std::stoi(radiusAsString);
            height = std::stoi(heightAsString);

            if ((radius >= 0) && (height >= 0)) {
                // call functions
                volume = Calculations(radius, height);
                std::cout << volume << "cm^3" << std::endl;
                break;
            } else {
                std::cout << "That was not a valid number."
                << std::endl;
            }
        } catch (std::invalid_argument) {
        std::cout << "That was not a valid number."
        << std::endl;
        }
    }
}
