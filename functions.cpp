//
// Created by Paulius on 2019-05-21.
//

#include <cmath>
#include "functions.h"

double funcBooth(std::vector<double> &X){
    return pow(X[0] + 2 * X[1] - 7, 2) + pow(2 * X[0] + X[1] - 5, 2);
}
