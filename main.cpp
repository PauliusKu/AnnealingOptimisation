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
    std::vector<double> X{1, 2};

    double min = -10;
    double max = 10;
    double temperature = 1;
    double tempDecrVal = 0.99999;
    unsigned int itterations = 1000000;

    annealingMeth(funcBooth, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

    return 0;
}





// End Main
