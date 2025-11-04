#include <iostream>
#include <cmath>
#include <iomanip>

bool assertEqualInt(int actual, int expected, const char* name, int testNo) {
    if (actual == expected) {
        std::cout << "Passed Test " << testNo << " (" << name << ")\n";
        return true;
    }
    std::cout << "Failed Test " << testNo << " (" << name << ") "
    << "Expected " << expected << " but got " << actual << "\n";
    return false;
}

bool assertNear(double actual, double expected, double eps, const char* name, int testNo) {
    if (std::fabs(actual - expected) <= eps) {
        std::cout << "Passed Test " << testNo << " (" << name << ")\n";
        return true;
    }
    std::cout << "Failed Test " << testNo << " (" << name << ") "
    << "Expected " << expected << " but got " << actual << "\n";
    return false;
}

int isEven(int);
int max2(int, int);
double rectArea(double, double);
double celsiusToF(double);

int isEven(int number){
    return (number % 2 == 0) ? 1 : 0;
}

int max2(int x1, int x2){
    return (x1 > x2) ? x1 : x2;
}

double rectArea(double a, double b){
    return (a < 0 || b < 0) ? 0 : a*b;
}

double celsiusToF(double value){
    return (value * (9.0 / 5.0)) + 32;
}

int main() {
    std::cout << std::fixed << std::setprecision(6);
    int t = 1;
    assertEqualInt(isEven(4), 1, "isEven(4)", t++);
    assertEqualInt(isEven(7), 0, "isEven(7)", t++);
    assertEqualInt(max2(3, 5), 5, "max2(3,5)", t++);
    assertEqualInt(max2(-2, -8), -2, "max2(-2,-8)", t++);
    assertNear(rectArea(3.0, 4.0), 12.0, 1e-9, "rectArea(3,4)", t++);
    assertNear(rectArea(-3.0, 4.0), 0.0, 1e-12, "rectArea(-3,4)", t++);
    assertNear(celsiusToF(0.0), 32.0, 1e-12, "celsiusToF(0)", t++);
    assertNear(celsiusToF(100.0), 212.0, 1e-12, "celsiusToF(100)", t++);
    /* 
    Computer's memory has some limitations so two double numbers may not be equal. 
    We use eps in comparisons to define a small tolerance band.
    */
    return 0;
}