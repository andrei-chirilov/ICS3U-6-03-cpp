// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: December 2019
// This program get's random numbers and finds the minumum/lowest number

#include <iostream>
#include <ctime>
#include <array>

template<size_t N>
int Calculate(std::array<int, N> arrayOfNumbers) {
    // This function finds the smallest number of the randomly generated list

    // Variables and arrays
    int smallestArrayNumber = 100;

    // Process
    for (int repeater : arrayOfNumbers) {
        if (repeater < smallestArrayNumber) {
            smallestArrayNumber = repeater;
        }
    }

    // Output
    return smallestArrayNumber;
}

int main() {
    // This function creates an array of 10 numbers then prints out the largest

    // Random number seed
    unsigned int seed = time(NULL);

    // Variables and arrays
    int randomNumber;
    int smallestNumber;
    std::array<int, 10> numberArray;

    // Adding numbers to an array
    for (int repeater = 0; repeater < 10; repeater++) {
        randomNumber = rand_r(&seed) % 100;
        std::cout << "Random Number " << repeater << " is " << randomNumber
                  << std::endl;
        numberArray[repeater] = randomNumber;
    }

    // Process
    smallestNumber = Calculate(numberArray);

    // Output
    std::cout << "The smallest randomly generated number from the array is " \
              << smallestNumber << std::endl;
}
