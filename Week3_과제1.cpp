#include <iostream>
using namespace std;

int max(int a, int b) // �Էµ� �� ���� ���ؼ� ū �� ����
{
	if (a > b)
		return a;
	else
		return b;
}

int min(int a, int b) // �Էµ� �� ���� ���ؼ� ���� �� ����
{
	if (a > b)
		return b;
	else
		return a;
}

int main()
{
	int num1, num2;
	cout << "�� ���� �Է��� �ּ��� (����� ����) >> ";
	cin >> num1 >> num2;
	cout << endl << endl;
	cout << "ū �� >> " << max(num1, num2) << endl;
	cout << "���� �� >> " << min(num1, num2) << endl;
}