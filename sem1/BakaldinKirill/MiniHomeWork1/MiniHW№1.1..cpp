#include <iostream>

//�������� ������� ���������� ������� ��������
int Area_trapezoid(int a, int b, int h) {
	return (a + b) * h / 2;
}

//��������� �������
int main() {
	std::cout << "Enter fisrt base of trapezoid" << std::endl;
	int base_1 = 0;
	std::cin >> 1_base;
	int a = base_1
	std::cout << "Enter second base of trapezoid" << std::endl;
	int base_2 = 0;
	std::cin >> 2_base;
	int b = base_2
	std::cout << "Enter height of trapezoid" << std::endl;
	int height = 0;
	std::cin >> height;
	int h = height;
	std::cout << "Area of the trapezoid = " << Area_trapezoid(a, b, h) << std::endl;
}