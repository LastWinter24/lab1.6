#pragma once
#include <iostream>
#include <cstdlib>  // Для использования функций rand и srand
#include <ctime>    // Для использования функции time

// Метод для генерации случайного целого числа в диапазоне (A, B)
int GenIntNumber(int A, int B) {
    // Инициализация генератора случайных чисел с использованием текущего времени
    srand(static_cast<unsigned>(time(0)));

    // Генерация случайного числа в диапазоне (A, B)
    return rand() % (B - A + 1) + A;
}

// Метод для заполнения целочисленного массива случайными числами
void FillArrayIntNumber(int* arr, int size, int A, int B) {
    for (int i = 0; i < size; ++i) {
        // Используем метод GenIntNumber для генерации числа и сохранения в массиве
        arr[i] = GenIntNumber(A, B);
    }
}

// Метод для расчета суммы четных чисел в массиве
int GetSumEvenNumberInArray(const int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        // Если число четное, добавляем его к сумме
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}