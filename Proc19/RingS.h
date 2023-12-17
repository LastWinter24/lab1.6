#pragma once
#include <iostream>

// Функция для вычисления площади кольца между двумя окружностями
double RingS(double R1, double R2) {
    // Используем формулу площади кольца: S = π(R1^2 - R2^2)
    const double pi = 3.14;
    double area = pi * (R1 * R1 - R2 * R2);
    return area;
}
