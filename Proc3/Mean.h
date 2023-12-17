#pragma once
#include <iostream>
#include <cmath>

// ��������� ��� ���������� �������� ��������������� � �������� ���������������
void Mean(double X, double Y, double& AMean, double& GMean) {
    // ������� ��������������
    AMean = (X + Y) / 2.0;

    // ������� ��������������
    GMean = std::sqrt(X * Y);
}