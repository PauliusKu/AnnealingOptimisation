#include <cmath>

#ifndef ANNEALINGOPTIMISATION_FUNCTIONS_H
#define ANNEALINGOPTIMISATION_FUNCTIONS_H

double funcBooth(const double x1, const double x2){
    return pow(x1 + 2 * x2 - 7, 2) + pow(2 * x1 + x2 - 5, 2);
}

#endif //ANNEALINGOPTIMISATION_FUNCTIONS_H
