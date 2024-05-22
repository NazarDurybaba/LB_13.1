
#include "TaylorSeries.h"
#include <iostream>
#include <iomanip>
#include <cmath>

namespace TaylorSeries {
    double x_start = 0.0;
    double x_end = 0.0;
    double dx = 0.0;
    double epsilon = 0.0;

    double calculateTerm(double x, int n) {
        static double term = x;
        if (n == 0) {
            term = x;
        }
        else {
            term *= -x * n / (n + 1);
        }
        return term;
    }

    double calculateSum(double x, int& terms) {
        double sum = 0;
        int n = 0;
        double term;
        terms = 0;
        do {
            term = calculateTerm(x, n);
            sum += term;
            n++;
            terms++;
        } while (std::fabs(term) > epsilon);
        return sum;
    }

    void printTable() {
        std::cout << std::setw(10) << "x"
            << std::setw(20) << "ln(x+1)"
            << std::setw(20) << "Sum"
            << std::setw(20) << "Terms"
            << std::endl;

        for (double x = x_start; x <= x_end; x += dx) {
            double actualValue = std::log(x + 1);
            int terms = 0;
            double sum = calculateSum(x, terms);
            std::cout << std::setw(10) << x
                << std::setw(20) << actualValue
                << std::setw(20) << sum
                << std::setw(20) << terms
                << std::endl;
        }
    }
}
