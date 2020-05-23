#include <iostream>
using namespace std;

void print(int* arr) // ��ȯ���� void��, �Լ� �̸��� print, �Ű������� int�� �迭
{
	int i;

	for (i = 0; i < 5; i++) // �迭�� ������� ���
	{
		cout << i + 1 << ". " << arr[i] << endl;
	}
}

void sort(int* arr) // ��ȯ���� void��, �Լ� �̸��� sort, �Ű������� int�� �迭
{
	int i, k;
	int temp; // ���Ƿ� ��ȯ�� ���� ���� ����

	for (k = 0; k < 4; k++) // ���� ���� ���� arr[4]�� ����Ǿ��ִٰ� �������� ��, �� ���� ù ��° �ڸ����� ���� ���� �ݺ��ؾ� �� Ƚ��: 4ȸ
	{
		for (i = 0; i < 4; i++) // arr[0]~arr[4]���� �յ��� �� ���� ũ�� �񱳸� ���� �ݺ��ؾ� �� Ƚ��: 4ȸ
		{
			if (arr[i] > arr[i + 1]) // arr[i]�� arr[i + 1]���� Ŭ ��� �� ���� �迭�� ��ġ ��ȯ
			{
				temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

int main()
{
	int arr[5]; // ũ�Ⱑ 5�� int�� �迭 ����
	int* ptr = arr; // ������ ���� ptr ����, �ʱ�ȭ
	int i;

	cout << "���� �ټ����� �Է����ּ��� (����� ����) ";

	for (i = 0; i < 5; i++)
	{
		cin >> *(ptr + i);
	}

	cout << endl << endl << "< ���� �� >" << endl << endl;
	print(arr);

	sort(arr);

	cout << endl << endl << "< ���� �� >" << endl;
	print(arr);
}