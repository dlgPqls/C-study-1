#include <iostream>
using namespace std;

int main()
{
	int num[5]; // ���� �Է� ���� �迭 ����
	int odd_cnt = 0, even_cnt = 0; // Ȧ��, ¦�� ���� ī��Ʈ�� ����
	int i;

	for (i = 0; i < 5; i++) // ���� 5�� �Է¹ޱ�
	{
		cout << "���ڸ� �Է����ּ���: ";
		cin >> num[i];
	}

	cout << endl << "---------���---------" << endl;

	cout << "Ȧ��: ";
	for (i = 0; i < 5; i++)
		if (num[i] % 2 != 0) // num[i]�� Ȧ���̸� Ȧ�� ī��Ʈ ������Ű�� ����ϱ�
		{
			odd_cnt++;
			cout << num[i] << " ";
		}
	cout << endl << "Ȧ���� �� " << odd_cnt << "�� �Դϴ�." << endl << endl;

	cout << "¦��: ";
	for (i = 0; i < 5; i++)
		if (num[i] % 2 == 0) // num[i]�� ¦���̸� ¦�� ī��Ʈ ������Ű�� ����ϱ�
		{
			even_cnt++;
			cout << num[i] << " ";
		}
	cout << endl << "¦���� �� " << even_cnt << "�� �Դϴ�." << endl;
}