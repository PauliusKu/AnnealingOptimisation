#include <iostream>

double func(double x, double y){
    return -((x * y - x * x * y - x * y * y) / 8);
}

int main() {
    double x = 0;
    double y = 0;

    std::cout << func(x, y) << std::endl;

    return 0;
}