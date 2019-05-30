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
                 <<"(9) Sum Squares function"<<std::endl
                 <<"(10) Sphere function"<<std::endl
                 <<"(11) Rastrigin function"<<std::endl;
        std::cin>>choice;
    }

    if(choice == "1" || calcAll)
    {
        min = -4.5;
        max = 4.5;

        std::cout << "(1) Beale function-----------------------------------------------------------------" << std::endl;
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

        std::cout << "(2) Booth function-----------------------------------------------------------------" << std::endl;
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

        std::cout << "(3) Branin function----------------------------------------------------------------" << std::endl;
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

        std::cout << "(4) Easom function-----------------------------------------------------------------" << std::endl;
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

        std::cout << "(5) Goldstein&Price function-------------------------------------------------------" << std::endl;
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

        std::cout << "(6) Hump function------------------------------------------------------------------" << std::endl;
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

        std::cout << "(7) Matyas function----------------------------------------------------------------" << std::endl;
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

        std::cout << "(8) Zakharov function--------------------------------------------------------------" << std::endl;
        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcZakharov, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas: (0, ..., 0)" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }

    if(choice == "9" || calcAll)
    {
        min = -10;
        max = 10;

        std::cout << "(9) Sum Squares function----------------------------------------------------------" << std::endl;
        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcSumSquares, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas:  (0, ..., 0)" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }
    if(choice == "10" || calcAll)
    {
        min = -5.12;
        max = 5.12;

        std::cout << "(10) Sphere function---------------------------------------------------------------" << std::endl;
        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcSphere, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas:  (0, ..., 0)" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }
    if(choice == "11" || calcAll)
    {
        min = -5.12;
        max = 5.12;

        std::cout << "(11) Rastrigin function------------------------------------------------------------" << std::endl;
        auto start1 = std::chrono::high_resolution_clock::now();

        annealingMeth(funcRastrigin, randomNum, getNextMltDescT, temperature, itterations, X, min, max, tempDecrVal);

        auto finish1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed1 = finish1 - start1;
        std::cout << "Laukiamas rezultatas: (0, ..., 0)" << std::endl;
        std::cout << "Programos vykdymo laikas: " << elapsed1.count() << " s\n";
    }
}