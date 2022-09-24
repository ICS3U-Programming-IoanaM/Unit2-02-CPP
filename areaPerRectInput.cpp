// Copyright(c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu

// Date: Sept. 24, 2022
// calculates area and perimeter of rectangle with user input

#include <iostream>

int main() {
    // variables
    std::string unitOfMeasurement;
    int length, width;
    int area, perimeter;

    // getting user input
    std::cout << "Please enter a unit of measurement (i.e, cm, mm, etc.): ";
    std::cin >> unitOfMeasurement;
    std::cout << "Enter length value: ";
    std::cin >> length;
    std::cout << "Enter width value: ";
    std::cin >> width;

    // calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // print out results
    std::cout << "Area = " << area << unitOfMeasurement << "^2" << std::endl;
    std::cout << "Perimeter = " << perimeter << unitOfMeasurement;
}
