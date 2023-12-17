#include <iostream>
#include <cmath>
#include "Mean.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    // Входные данные
    double A, B, C, D;
    cout << "Введите четыре положительных числа (A, B, C, D): ";
    cin >> A >> B >> C >> D;

    // Вычисление для пар (A, B)
    double AMeanAB, GMeanAB;
    Mean(A, B, AMeanAB, GMeanAB);
    cout << "Среднее значение для (A, B): Среднее значение = " << AMeanAB << ", GMean = " << GMeanAB << endl;

    // Вычисление для пар (A, C)
    double AMeanAC, GMeanAC;
    Mean(A, C, AMeanAC, GMeanAC);
    cout << "Среднее значение для (A, C): AMean = " << AMeanAC << ", GMean = " << GMeanAC << endl;

    // Вычисление для пар (A, D)
    double AMeanAD, GMeanAD;
    Mean(A, D, AMeanAD, GMeanAD);
    cout << "Среднее значение для (A, D): Среднее значение = " << AMeanAD << ", GMean = " << GMeanAD << endl;

	
	return 0;
}



