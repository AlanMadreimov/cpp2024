#include<iostream>

using namespace std;

int Fibo(int n) {
	if (n >= 0) {
		if (n == 0) {
			return 0;
		}
		else if (n == 1) {
			return 1;
		}
		return Fibo(n - 2) + Fibo(n - 1);
	}
	
	else {
		if (n == 0) {
			return 0;
		}
		else if (n == -1) {
			return 1;
		}
		return Fibo(n + 2) - Fibo(n + 1);

	}
}
/* ����� ��������� ������ ��������������� � �������������, ���� ��� �� ����� �� else � ������� ��������� �������������� �
	� main ������ ����, ������� ��� ����� ������� ����:
	int n;
	do{
		cout << "Please enter n: ";
		cin >> n;
		if (n < 0){
			cout << "Fibonachi number can't be -";
		}
	} while (n < 0);
	cout << Fibo(n);
	return 0;
*/
int main() {

	int n;
	cout << "Please enter n: ";
	cin >> n;
	cout << Fibo(n);

	return 0;
}