#ifndef TAYLOR_SERIES_H
#define TAYLOR_SERIES_H

namespace TaylorSeries {
    extern double x_start, x_end, dx, epsilon;

    double calculateTerm(double x, int n);
    double calculateSum(double x, int &terms);
    void printTable();
}

#endif // TAYLOR_SERIES_H
