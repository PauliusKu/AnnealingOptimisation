//
// Created by Paulius on 2019-05-21.
//

#include <cmath>
#include "functions.h"

double funcBooth(std::vector<double> &X){
    return pow(X[0] + 2 * X[1] - 7, 2) + pow(2 * X[0] + X[1] - 5, 2);
}
double funcMatyas(std::vector<double> &X){
    return 0.20*(pow(X[0],2)+pow(X[1],2)) - 0.48*X[0]*X[1];
}
double funcGoldsteinAndPrice(std::vector<double>&X){
    return (1+pow(X[0]+X[1]+1,2)*(19-14*X[0]+13*pow(X[1],2)-14*X[1]+6*X[0]*X[1]+3*pow(X[1],2)
    *(30+pow(2*X[0]-3*X[1],2)*(18-32*X[0]+12*pow(X[1],2)-48*X[1]-36*X[0]*X[1]+27*pow(X[1],2)))));

}
double funcEasom(std::vector<double>&X){
    return -1*std::cos(X[0])*std::cos(X[1])*M_E*(-pow(X[0]- M_PI,2)-pow(X[1]-M_PI,2));
}