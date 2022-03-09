// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved
//
// Created by Aidan Lalonde-Novales
// Created on 2022-xx-xx
// This is a program that...

#include <iostream>
#include <iomanip>

int main() {
    // This function...
    const float HST = 1.13;

    float total;
    float cost;

    // Input
    std::cout << "Enter a price (CAD): ";
    std::cin >> cost;

    // Process
    total = cost * HST;

    // Output
    std::cout << "It will cost $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << total << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
