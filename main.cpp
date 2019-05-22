//
// Created by Paulius on 2019-05-21.
//

#include <iostream>
#include <vector>

#include "functions.h"
#include "optMethods.h"
#include "randomNum.h"
#include "tempMethods.h"

// Main

int main() {
    std::vector<double> X{1, 2, 3, 4};

    double min = -5.12;
    double max = 5.12;
    double temperature = 1;
    double tempDecrVal = 0.999999;
    unsigned int itterations = 10000000;

    annealingMeth(funcRastrigin, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

    return 0;
}





// End Main
