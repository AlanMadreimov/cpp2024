#include <iostream>

int SquareArea(int Length) {
    return Length * Length;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int InputSide;
    std::cout << "������� ����� ������� ��������: ";
    std::cin >> InputSide;

    int Area = SquareArea(InputSide);
    std::cout << "������� ��������: " << Area;

    return 0;
}