//
// Created by Paulius on 2019-05-21.
//

#ifndef ANNEALINGOPTIMISATION_OPTMETHODS_H
#define ANNEALINGOPTIMISATION_OPTMETHODS_H

#include <vector>
#include <string>
#include <iostream>

void annealingMeth(double (*)(double[]), double (*)(double&, double&),
                   unsigned int&, unsigned int&, const std::vector<double>&,
                   double&, double&);

#endif //ANNEALINGOPTIMISATION_OPTMETHODS_H
