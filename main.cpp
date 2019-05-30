//
// Created by Paulius on 2019-05-21.
//
#include <chrono>
#include <iostream>
#include <vector>

#include "functions.h"
#include "optMethods.h"
#include "randomNum.h"
#include "tempMethods.h"
#include "UI.h"

// Main

int main() {

    std::string choice;
    std::cout << "Iveskite (1) jei norite pritaikyti algoritma visoms galimoms funkcijoms." << std::endl;
    std::cout << "Iveskite (2) jei norite pritaikyti algoritma konkreciai funkcijai." << std::endl;
    std::cin >> choice;

    if (choice == "1") {
        runFunc(true);
    } else if (choice == "2") {
        runFunc(false);
    }
    return 0;
}

// End Main
