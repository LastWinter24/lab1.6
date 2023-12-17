#pragma once
#include <iostream>
#include <cmath>

// Процедура для вычисления среднего арифметического и среднего геометрического
void Mean(double X, double Y, double& AMean, double& GMean) {
    // Среднее арифметическое
    AMean = (X + Y) / 2.0;

    // Среднее геометрическое
    GMean = std::sqrt(X * Y);
}