//
// Created by Paulius on 2019-05-21.
//


#include <iostream>
#include <vector>

#include "functions.h"
#include "optMethods.h"


int main() {
    std::vector<double> X{1, 2};

    double min = -2;
    double max = 2;
    unsigned int temperature = 100000;
    unsigned int itterations = 100000;

    annealingMeth(funcGoldsteinAndPrice, randomNum, temperature, itterations, X, min, max);

    return 0;
}