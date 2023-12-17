#include <iostream>
#include "CircleS.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    // Радиусы трех кругов
    double radius1, radius2, radius3;

    // Получаем радиусы от пользователя
    cout << "Введите радиус первого круга: ";
    cin >> radius1;

    cout << "Введите радиус второго круга: ";
    cin >> radius2;

    cout << "Введите радиус третьего круга: ";
    cin >> radius3;

    // Вычисляем площади кругов с использованием функции CircleS
    double area1 = CircleS(radius1);
    double area2 = CircleS(radius2);
    double area3 = CircleS(radius3);

    // Выводим результаты
    cout << "Площадь круга с радиусом " << radius1 << " равна " << area1 << endl;
    cout << "Площадь круга с радиусом " << radius2 << " равна " << area2 << endl;
    cout << "Площадь круга с радиусом " << radius3 << " равна " << area3 << endl;

	
	return 0;
}



