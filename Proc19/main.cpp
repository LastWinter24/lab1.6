#include <iostream>
#include "RingS.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    // Радиусы внешних и внутренних окружностей для трех колец
    double outerRadius1, innerRadius1;
    double outerRadius2, innerRadius2;
    double outerRadius3, innerRadius3;

    // Получаем радиусы от пользователя
    cout << "Введите внешний и внутренний радиусы первого кольца: ";
    cin >> outerRadius1 >> innerRadius1;

    cout << "Введите внешний и внутренний радиусы второго кольца: ";
    cin >> outerRadius2 >> innerRadius2;

    cout << "Введите внешний и внутренний радиусы третьего кольца: ";
    cin >> outerRadius3 >> innerRadius3;

    // Вычисляем площади колец с использованием функции RingS
    double area1 = RingS(outerRadius1, innerRadius1);
    double area2 = RingS(outerRadius2, innerRadius2);
    double area3 = RingS(outerRadius3, innerRadius3);

    // Выводим результаты
    cout << "Площадь кольца с внешним радиусом " << outerRadius1
        << " и внутренним радиусом " << innerRadius1 << " равна " << area1 << endl;

    cout << "Площадь кольца с внешним радиусом " << outerRadius2
        << " и внутренним радиусом " << innerRadius2 << " равна " << area2 << endl;

    cout << "Площадь кольца с внешним радиусом " << outerRadius3
        << " и внутренним радиусом " << innerRadius3 << " равна " << area3 << endl;

	
	return 0;
}



