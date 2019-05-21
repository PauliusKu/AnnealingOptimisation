//
// Created by Paulius on 2019-05-21.
//

#include <cmath>
#include "functions.h"

double funcBooth(double X1[]){
    return pow(X1[0] + 2 * X1[1] - 7, 2) + pow(2 * X1[0] + X1[1] - 5, 2);
}
