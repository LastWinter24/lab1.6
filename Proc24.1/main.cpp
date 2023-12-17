#include <iostream>
#include "Metod.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    // Запрос размера целочисленного массива
    cout << "Введите размер целочисленного массива: ";
    int size;
    cin >> size;

    // Создание динамического массива
    int* myArray = new int[size];

    // Заполнение массива случайными числами
    FillArrayIntNumber(myArray, size, 1, 100);

    // Вывод массива
    cout << "Сгенерированный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // Расчет суммы четных чисел в массиве
    int sumEven = GetSumEvenNumberInArray(myArray, size);

    // Вывод результата
    cout << "Сумма четных чисел в массиве: " << sumEven << endl;

    // Освобождение памяти
    delete[] myArray;

	
	return 0;
}



