#pragma once
#include <iostream>

// ������� ��� ������� ������������ ������ ���� �����
void ShiftRight3(double& A, double& B, double& C) {
    // ��������� �������� ��� ������������ �������������
    double tempA = A;
    double tempB = B;

    // ��������� �����: �������� A ��������� � B, B � � C, C � � A
    A = C;
    B = tempA;
    C = tempB;
}