#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float UpperSideTrapezoid, LowerSideTrapezoid, TrapezoidHeight, HalfSumBases, TrapezoidArea;
	cout << "������� ����� �������� ��������� ����� ��������:";
	cin >> UpperSideTrapezoid;
	cout << "������� ����� ������� ��������� ����� ��������:";
	cin >> LowerSideTrapezoid;
	cout << "������� ������ ����� ��������:";
	cin >> TrapezoidHeight;
	HalfSumBases = (UpperSideTrapezoid + LowerSideTrapezoid) / 2;
	TrapezoidArea = HalfSumBases * TrapezoidHeight;
	cout << "������� ����� ��������:" << TrapezoidArea;
}