#include <iostream>

float squareArea(float edge)
{
    return edge*edge;
}

int main()
{
    setlocale(LC_ALL, "");

    float inputValue = 0;

    std::cout << "������� ������� ��������: ";
    std::cin >> inputValue;

    std::cout << squareArea(inputValue);

    return 0;
}

