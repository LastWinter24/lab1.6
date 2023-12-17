#pragma once
#include <iostream>
#include <cstdlib>  // ��� ������������� ������� rand � srand
#include <ctime>    // ��� ������������� ������� time

// ����� ��� ��������� ���������� ������ ����� � ��������� (A, B)
int GenIntNumber(int A, int B) {
    // ������������� ���������� ��������� ����� � �������������� �������� �������
    srand(static_cast<unsigned>(time(0)));

    // ��������� ���������� ����� � ��������� (A, B)
    return rand() % (B - A + 1) + A;
}

// ����� ��� ���������� �������������� ������� ���������� �������
void FillArrayIntNumber(int* arr, int size, int A, int B) {
    for (int i = 0; i < size; ++i) {
        // ���������� ����� GenIntNumber ��� ��������� ����� � ���������� � �������
        arr[i] = GenIntNumber(A, B);
    }
}

// ����� ��� ������� ����� ������ ����� � �������
int GetSumEvenNumberInArray(const int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        // ���� ����� ������, ��������� ��� � �����
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}