//
// Created by Paulius on 2019-05-21.
// Functions taken from http://www-optima.amp.i.kyoto-u.ac.jp/member/student/hedar/Hedar_files/TestGO_files/Page364.htm
//

#include <cmath>
#include "functions.h"


/* Number of variables: n = 2.
 * Search domain: −10 ≤ xi ≤ 10, i = 1, 2.
 * Number of local minima: several local minima.
 * The global minimum: x* =  (1, 3), f(x*) = 0 */
double funcBooth(std::vector<double> &X){
    return pow(X[0] + 2 * X[1] - 7, 2) + pow(2 * X[0] + X[1] - 5, 2);
}

/* Number of variables: n variables.
 * Search domain: −5.12 ≤ xi ≤ 5.12, i = 1, 2, . . . , n.
 * Number of local minima: several local minima.
 * The global minima: x* =  (0, …, 0), f(x*) = 0. */
double funcRastrigin(std::vector<double>&X){
    double s = 0;
    for(auto& j: X) {
        s = s+(pow(j,2)-10*cos(2*M_PI*j));
    }
    return 10*X.size()+s;
}

double funcMatyas(std::vector<double> &X){
    return 0.26*(pow(X[0],2)+pow(X[1],2)) - 0.48*X[0]*X[1];
}

double funcGoldsteinAndPrice(std::vector<double>&X){
    return (1+pow(X[0]+X[1]+1,2)*(19-14*X[0]+13*pow(X[1],2)-14*X[1]+6*X[0]*X[1]+3*pow(X[1],2)
    *(30+pow(2*X[0]-3*X[1],2)*(18-32*X[0]+12*pow(X[1],2)-48*X[1]-36*X[0]*X[1]+27*pow(X[1],2)))));
}

double funcEasom(std::vector<double>&X){
    return -1*std::cos(X[0])*std::cos(X[1])*M_E*(-pow(X[0]- M_PI,2)-pow(X[1]-M_PI,2));
}

double funcBeale(std::vector<double>&X){
    return pow(1.5-X[0]+X[0]*X[1],2)+
            pow(2.25-X[0]+X[0]*X[1],2)+
            pow(2.625-X[0]+X[0]*X[1],2);
}
double funcBranin(std::vector<double>&X){
    return pow(X[1]-(5.1/(4*pow(M_PI,2)))*pow(X[0],2)+5*X[0]/M_PI-6,2)+10*(1-1/(8*M_PI))*std::cos(X[0])+10;
}
double funcHump(std::vector<double>&X){
    return 1.0316285+4*pow(X[0],2)-2.1*pow(X[0],4)+pow(X[0],6)/3+X[0]*X[1]-4*pow(X[1],2)+4*pow(X[1],4);
}
double funcZakharov(std::vector<double>&X){
    double s1 =0, s2=0;
    for(int i=1; i!=X.size();i++)
    {
        s1 = s1 + pow(X[i-1],2);
        s2 = s2 + 0.5*i*X[i-1];
    }
    return s1+pow(s2,2)+pow(s2,4);
}
double funcTrid(std::vector<double>&X){
    double s1 =0, s2=0;
    for(int i=1; i!=X.size();i++)
    {
        s1 = s1+pow(X[i-1]-1,2);
    }
    for(int i=2; i!=X.size();i++)
    {
        s2 = s2+X[i-1]*X[i-2];
    }
    return s1-s2;
}
double funcSumSquares(std::vector<double>&X){
    double s = 0;
    for(int i=1; i!=X.size(); i++)
    {
        s = s*i*pow(X[i-1],2);
    }
    return s;
}
double funcSphere(std::vector<double>&X){
    double s = 0;
    for(int i=1; i!=X.size();i++)
    {
        s = s+pow(X[i-1],2);
    }
    return s;
}
double funcShubert(std::vector<double>&X){
    double s1 = 0, s2 = 0;
    for(int i=1; i<5;i++)
    {
        s1 = s1+i*cos((i+1)*X[0]+i);
        s2 = s2+i*cos((i+1)*X[1]+i);
    }
    return s1*s2;
}