#include <iostream>
#include "Swap.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    // Заданные переменные A, B, C, D
    double A, B, C, D;

    // Ввод значений для переменных A, B, C, D
    cout << "Введите значения для A, B, C, D: ";
    cin >> A >> B >> C >> D;

    // Поменять содержимое пар: A и B, C и D, B и C
    Swap(A, B);
    Swap(C, D);
    Swap(B, C);

    // Вывести новые значения A, B, C, D
    cout << "Новые значения после замены: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << endl;


	return 0;
}



