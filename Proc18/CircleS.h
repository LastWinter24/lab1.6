#pragma once
#include <iostream>

// ������� ��� ���������� ������� ����� �� �������
double CircleS(double radius) {
    // ���������� ������� S = ?�R^2
    const double pi = 3.14;
    double area = pi * radius * radius;
    return area;
}
