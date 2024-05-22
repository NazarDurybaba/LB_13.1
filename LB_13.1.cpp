#include "TaylorSeries.h"
#include <iostream>

int main() {
    using namespace TaylorSeries;

    std::cout << "Enter x_start: ";
    std::cin >> x_start;
    std::cout << "Enter x_end: ";
    std::cin >> x_end;
    std::cout << "Enter dx: ";
    std::cin >> dx;
    std::cout << "Enter epsilon: ";
    std::cin >> epsilon;

    printTable();

    return 0;
}
