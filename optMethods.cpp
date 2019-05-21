//
// Created by Paulius on 2019-05-21.
//

#include "optMethods.h"

void genNewNeighbour(double (*)(double&, double&), std::vector<double>&, double&, double&);

// Main

void annealingMeth(double (*funcOpt)(double[]), double (*funcRand)(double&, double&),
                   unsigned int &temp, unsigned int &itr, const std::vector<double> &X,
                   double &min, double &max){

    std::vector<double> Xnew;
    Xnew.resize(X.size());

    for(unsigned int i = 0; i < itr; i++){
        /* Generate new neighbour */
        genNewNeighbour(funcRand, Xnew, min, max);
        std::cout << Xnew[0] << " --- " << Xnew[1] << std::endl;

    }

}

// End Main

// Inner functions


void genNewNeighbour(double (*funcRand)(double&, double&), std::vector<double> &X, double &min, double &max) {
    for(auto& value: X){
        value = funcRand(min, max);
    }
}

// End inner functions
