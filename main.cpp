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

// Main

int main() {
    std::vector<double> X{1, 2};

    double min = -10;
    double max = 10;
    double temperature = 1;
    double tempDecrVal = 0.99999;
    unsigned int itterations = 1000000;

    auto start1 = std::chrono::high_resolution_clock::now();

    annealingMeth(funcBooth, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

    auto finish1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed1 = finish1 - start1;
    std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";

    return 0;
}





// End Main
