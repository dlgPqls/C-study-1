#include <iostream>
using namespace std;

void swap(int *a, int *b) // ��ȯ���� void��, �Լ� �̸��� swap, �Ű������� �� ���� ����
{
	int temp; // ���� ��ȯ�� ���� int�� ���� �ϳ� �� ����
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int num1, num2; // �Է¹��� �� ���� ���� ����
	cout << "first number >> ";
	cin >> num1;
	cout << "second number >> ";
	cin >> num2;

	cout << endl;
	cout << "swap �� >> " << num1 << " " << num2 << endl;
	swap(&num1, &num2);
	cout << "swap �� >> " << num1 << " " << num2 << endl;
}