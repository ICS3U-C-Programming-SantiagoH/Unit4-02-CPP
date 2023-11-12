// Copyright (c) 2023 Santiago Hewett All rights reserved.
//
// Created by: Santiago Hewett
// Date: Nov 8, 2023
// This program will ask the user
// for a integer and it will tell them the factorial
// of the number with try catch

#include <iostream>
#include <string>

int main() {
    // Declare userNumString
    std::string userNumString;

    // initialize counter and factorial variables
    int counter = 1;
    int factorial = 1;
    float userNumFloat;

    // Get the userNumString and display a message about the program
    std::cout << "This program will ask the user";
    std::cout << " for a integer and it will tell them the factorial";
    std::cout << " of the number";
    std::cout << "\nEnter your integer: ";
    std::cin >>
        userNumString;

    try {
        // Convert userNumString to int
        int userNumInt = std::stoi(userNumString);

        // Convert userNumStr to float

        float userNumFloat = std::stof(userNumString);

        // check if user number is negative

        if (userNumInt != userNumFloat) {
            // display that user number is not positive

            std::cout << userNumFloat << " is not a valid int." << std::endl;

        } else if (userNumInt < 0) {
            // display that user number is not positive

            std::cout << userNumInt << " is not a positive int." << std::endl;
        } else {
            do {
                // calculate factorial
                factorial = factorial * counter;

                // display how may times it loops
                std::cout << "The loop ran " << counter
                          << " times." << std::endl;

                // increment counter
                counter = counter + 1;
            } while (counter <= userNumInt);

            // display factorial
            std::cout << factorial << " is the factorial of "
                      << userNumInt << std::endl;
        }
    } catch (std::invalid_argument) {
        // Display that the user int was not valid

        std::cout << userNumString << " is not a valid integer." << std::endl;
    }
}
