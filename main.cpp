//
// Created by Paulius on 2019-05-21.
//


#include <iostream>
#include <vector>

#include "functions.h"
#include "optMethods.h"
#include "randomNum.h"


int main() {
    std::vector<double> X{1, 2};

    double min = -10;
    double max = 10;
    unsigned int temperature = 500;
    unsigned int itterations = 100;

    annealingMeth(funcBooth, randomNum, temperature, itterations, X, min, max);

    return 0;
}