#pragma once
#include <iostream>

// Функция для вычисления площади круга по радиусу
double CircleS(double radius) {
    // Используем формулу S = ?·R^2
    const double pi = 3.14;
    double area = pi * radius * radius;
    return area;
}
