#pragma once
#include <iostream>

// ‘ункци€ дл€ правого циклического сдвига трех чисел
void ShiftRight3(double& A, double& B, double& C) {
    // —охран€ем значени€ дл€ последующего использовани€
    double tempA = A;
    double tempB = B;

    // ¬ыполн€ем сдвиг: значение A переходит в B, B Ч в C, C Ч в A
    A = C;
    B = tempA;
    C = tempB;
}