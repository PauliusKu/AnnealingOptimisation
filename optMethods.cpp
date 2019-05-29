//
// Created by Paulius on 2019-05-21.
//

#include "optMethods.h"
#include "randomNum.h"
#include "tempMethods.h"


void genNewNeighbour(double (*)(double&, double&), std::vector<double>&, double&, double&);

// Main

void annealingMeth(double (*funcOpt)(std::vector<double>&), double (*funcRand)(double&, double&),
                   double (*funcTemp)(double, double), double &temp, unsigned int &itr, std::vector<double> &X,
                   double &min, double &max, double &tempDecr){
    double aProb;
    std::vector<double> Xnew;
    Xnew.resize(X.size());

    for(unsigned int i = 0; i < itr; i++){
        /* Generate new neighbour */
        genNewNeighbour(funcRand, Xnew, min, max);

        /* Calculate delta energy */
        aProb = pow(M_E, (funcOpt(X) - funcOpt(Xnew)) / temp);
        if(aProb > randomNum())
            X.swap(Xnew);
        temp = funcTemp(temp, tempDecr);
    }
    for(auto& j:X){
        std::cout << j << " ";
    }
    std::cout<<std::endl;
}


// End Main

// Local functions

void genNewNeighbour(double (*funcRand)(double&, double&), std::vector<double> &X, double &min, double &max) {
    for(auto& value: X){
        value = funcRand(min, max);
    }
}

// End Local functions
