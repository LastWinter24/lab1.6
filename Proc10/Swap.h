#pragma once
// Процедура для обмена значениями переменных X и Y
void Swap(double& X, double& Y) {
    double temp = X;
    X = Y;
    Y = temp;
}