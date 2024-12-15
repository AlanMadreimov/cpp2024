#include <iostream>

float areaTrapezoid(float topEdge, float bottomEdge, float height)
{
	return (topEdge+bottomEdge)*height/2;
}

int main()
{
	setlocale(LC_ALL, "");

	float inputTopEdge = 0,inputBottomEdge = 0, inputHeight = 0;

	std::cout << "������� ������� ���������: ";
	std::cin >> inputTopEdge;

	std::cout << "������� ������ ���������: ";
	std::cin >> inputBottomEdge;
 
	std::cout << "������� ������ ��������: ";
	std::cin >> inputHeight;

	std::cout << areaTrapezoid(inputTopEdge, inputBottomEdge, inputHeight);

	return 0;
}

