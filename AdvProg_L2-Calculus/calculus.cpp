#include <iostream>
#include <string>
#include <cmath>

using namespace std ;


double mySin(double x);
double myCos(double x);
double mySqrt(double x);

/***
    Args:
        x (double): a number
    Returns:
        double: cosine of x
***/
double myCos(double x) {
    double result = 0;
    double term = 1;
    int n = 0;
    while (std::fabs(term) >= 0.001) {
        result += term;
        term = -term * x * x / ((2 * n + 2) * (2 * n + 1));
        n++;
    }
    return result;
}


/***
    Args:
        x (double): a number
    Returns:
        double: sine of x
***/
double mySin(double x) {
    double result = 0;
    double term = x;
    int n = 1;
    while (std::fabs(term) >= 0.001) {
        result += term;
        term = -term * x * x / ((2 * n) * (2 * n + 1));
        n++;
    }
    return result;
}


/***
    Args:
        x (double): a number
    Returns:
        double: square root of x
***/

double mySqrt(double x) {
    if (x < 0) {
        cout << "Invalid argument" << endl;
        exit(1);
    }
    double result = x / 2;
    while (std::fabs(result * result - x) >= 0.001) {
        result = (result + x / result) / 2;
    }
    return result;
}







