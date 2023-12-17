#include <iostream>
#include "Sum.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    int numbers[5]; // Массив для хранения пяти целых чисел

    cout << "Введите пять целых чисел: ";
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }

    for (int i = 0; i < 5; ++i) {
        int count, sum;
        DigitCountSum(numbers[i], count, sum);
        cout << "Для номера " << numbers[i] << ": Количество цифр = " << count << ", Сумма цифр = " << sum << endl;
    }

	
	return 0;
}



