#include <iostream>

static float TrapezoidArea(float UpperSide, float LowerSide, float Height) {
    return ((UpperSide+LowerSide)*Height)/2;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int InputUpperSide;
    int InputLowerSide;
    int Height;
    std::cout << "������� ����� �������� ��������� ��������: ";
    std::cin >> InputUpperSide;
    std::cout << "������� ����� ������� ��������� ��������: ";
    std::cin >> InputLowerSide;
    std::cout << "������� ������ ��������: ";
    std::cin >> Height;

    float Area = TrapezoidArea(InputUpperSide, InputLowerSide, Height);
    std::cout << "������� ��������: " << Area;

    return 0;
}