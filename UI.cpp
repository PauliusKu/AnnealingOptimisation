//
// Created by Vladas on 2019-05-23.
//

#include "UI.h"
#include "functions.h"
#include "optMethods.h"
#include "randomNum.h"
#include "tempMethods.h"
#include <chrono>
#include <iostream>
#include <vector>


void runFunc(bool calcAll){
    std::vector<double> X{1, 2};
    double min = -2;
    double max = 2;
    double temperature = 1;
    double tempDecrVal = 0.99999;
    unsigned int itterations = 1000000;

    std::string choice;
    if (!calcAll){
        std::cout<<"Iveskite norimos funkcijos numeri:"<<std::endl
                 <<"(1) Beale func1tion"<<std::endl
                 <<"(2) Booth function"<<std::endl
                 <<"(3) Branin function"<<std::endl
                 <<"(4) Easom function"<<std::endl
                 <<"(5) Goldstein&Price function"<<std::endl
                 <<"(6) Hump function"<<std::endl
                 <<"(7) Matyas function"<<std::endl
                 <<"(8) Zakharov function"<<std::endl
                 <<"(9) Trid function"<<std::endl
                 <<"(10) Sum Squares function"<<std::endl
                 <<"(11) Sphere function"<<std::endl
                 <<"(12) Shubert function"<<std::endl
                 <<"(13) Rastrigin function"<<std::endl;
        std::cin>>choice;
    }

    if(choice == "1" || calcAll)
    {
        min = -4.5;
        max = 4.5;

        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcBeale, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas: (3, 0.5)" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }
    if(choice == "2" || calcAll)
    {
        min = -10;
        max = 10;

        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcBooth, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas: (1, 3)" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }
    if(choice == "3" || calcAll)
    {
        //HAVE DIFFERENT SEARCH DOMAINS FOR VARIABLES!!!

        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcBranin, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas: (-π , 12.275), (π , 2.275), (9.42478, 2.475)" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }
    if(choice == "4" || calcAll)
    {
        min = -100;
        max = 100;

        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcEasom, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas: (π, π)" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }
    if(choice == "5" || calcAll)
    {
        min = -2;
        max = 2;

        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcGoldsteinAndPrice, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas: (0, 1)" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }
    if(choice == "6" || calcAll)
    {
        min = -5;
        max = 5;

        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcHump, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas: (0.0898, -0.7126), (-0.0898, 0.7126)" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }
    if(choice == "7" || calcAll)
    {
        min = -10;
        max = 10;

        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcMatyas, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas: (0, 0)" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }
    if(choice == "8" || calcAll)
    {
        min = -5;
        max = 10;

        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcZakharov, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas: (0, …, 0)" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }
    if(choice == "9" || calcAll)
    {
        min = -10;
        max = 10; //???

        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcTrid, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas:  f(x*) = -50    for n=6,  f(x*) = -200 for n=10" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }
    if(choice == "10" || calcAll)
    {
        min = -10;
        max = 10;

        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcSumSquares, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas:  (0, …, 0)" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }
    if(choice == "11" || calcAll)
    {
        min = -5.12;
        max = 5.12;

        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcSphere, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas:  (0, …, 0)" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }
    if(choice == "12" || calcAll)
    {
        min = -10;
        max = 10;

        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcShubert, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas: 18 global minima  f(x*) = -186.7309" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }
    if(choice == "13" || calcAll)
    {
        min = -5.12;
        max = 5.12;

        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcRastrigin, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas: (0, …, 0)" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }
}

void allFunc()
{
    auto start1 = std::chrono::high_resolution_clock::now();

    //funcBeale
        std::vector<double> X{1, 2};
        double min = -4.5;
        double max = 4.5;
        double temperature = 1;
        double tempDecrVal = 0.99999;
        unsigned int itterations = 1000000;
        std::cout<<"Beale function: ";
        annealingMeth(funcBeale, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        //FUNCBOOTH
        min = -10;
        max = 10;
        temperature = 1;
        tempDecrVal = 0.99999;
        itterations = 1000000;
        std::cout<<"Booth function: ";
        annealingMeth(funcBooth, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);


        //FUNCBRANIN
        min = 0;
        max = 10;
        temperature = 1;
        tempDecrVal = 0.99999;
        itterations = 1000000;
        std::cout<<"Branin function: ";
        annealingMeth(funcBranin, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);


        //FUNCEASOM
        min = -100;
        max = 100;
        temperature = 1;
        tempDecrVal = 0.99999;
        itterations = 1000000;
        std::cout<<"Easom function: ";
        annealingMeth(funcEasom, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        //FUNCGOLDSTEINANDPPRICE
        min = -2;
        max = 2;
        temperature = 1;
        tempDecrVal = 0.99999;
        itterations = 1000000;
        std::cout<<"Goldstein&Price function: ";
        annealingMeth(funcGoldsteinAndPrice, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        //funcHUMP
        min = -5;
        max = 5;
        temperature = 1;
        tempDecrVal = 0.99999;
        itterations = 1000000;
        std::cout<<"Hump function: ";
        annealingMeth(funcHump, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        //funcMatyas
        min = -10;
        max = 10;
        temperature = 1;
        tempDecrVal = 0.99999;
        itterations = 1000000;
        std::cout<<"Matyas function: ";
        annealingMeth(funcMatyas, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        //funcZakharov
        min = -5;
        max = 10;
        temperature = 1;
        tempDecrVal = 0.99999;
        itterations = 1000000;
        std::cout<<"Zakharov function: ";
        annealingMeth(funcZakharov, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        //funcTrid
       min = -pow(X.size(),2);
       max = pow(X.size(),2);
       temperature = 1;
       tempDecrVal = 0.99999;
       itterations = 1000000;
        std::cout<<"Trid function: ";
        annealingMeth(funcTrid, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        //funcSumSquares
        min = -10;
        max = 10;
        temperature = 1;
        tempDecrVal = 0.99999;
        itterations = 1000000;
        std::cout<<"Sum Squares function: ";
        annealingMeth(funcSumSquares, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        //funcSpphere
        min = -5.12;
        max = 5.12;
        temperature = 1;
        tempDecrVal = 0.99999;
        itterations = 1000000;
        std::cout<<"Sphere function: ";
        annealingMeth(funcSphere, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        //funcShubert
        min = -10;
        max = 10;
        temperature = 1;
        tempDecrVal = 0.99999;
        itterations = 1000000;
        std::cout<<"Shubert function: ";
        annealingMeth(funcShubert, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        //funcRastrigin
        min = -5.12;
        max = 5.12;
        temperature = 1;
        tempDecrVal = 0.99999;
        itterations = 1000000;
        std::cout<<"Rastrigin function: ";
        annealingMeth(funcRastrigin, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";

}