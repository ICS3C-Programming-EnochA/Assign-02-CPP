// Copyright (c) 2025 Enoch Amedjrovi All rights reserved
// Created by: Enoch Amedjrovi
// 7 March 7, 2025
// This program calculates the area and perimeter of a circle.
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    std::cout << "This program calculates the ";
    std::cout << "volume and area of a hexagonal pyramid\n";

    float edge, height;
    std::cout << "What is the edge? ";
    std::cin >> edge;
    std::cout << "What is the height? ";
    std::cin >> height;

    float volume = ((sqrt(3)) / 2) * ((edge * edge) * height)
    float area = ((((3*(sqrt(3))))/(2))*(edge*edge))+(3*edge)*
(sqrt((height*height)+((3*(edge*edge))/4)));

    std::cout << std::fixed << std::setprecision(2) << area << std::endl;
    std::cout << std::fixed << std::setprecision(2) << volume << std::endl;
}
