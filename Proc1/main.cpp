#include <iostream>
#include "PowerA3.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    double inputNumber;
    cout << "Введите число, чтобы вычислить его куб (A): ";
    cin >> inputNumber;

    double result;
    PowerA3(inputNumber, result);

    cout << "Куб числа " << inputNumber << " является: " << result << endl;

    int x, y;
    cout << "Введите два целых числа x и y, чтобы найти сумму кубов от x до y: ";
    cin >> x >> y;

    int sum = sumOfCubes(x, y);
    cout << "Сумма кубов из " << x << " к " << y << " является: " << sum << endl;


	return 0;
}



