#include <iostream>
using namespace std;

void sort(int* ptr);
void print(int* ptr);

int main(void)
{
	int arr[5] ;
	int* ptr = arr;
	int i ;

	cout << "���� 5���� �Է����ּ��� (����� ����)";

	for (i = 0; i < 5; i++) {
		cin >> *(arr+i);
	}

	cout << "���� ��" << endl;
	print(arr);
	sort(arr);

	cout << "���� ��" << endl;
	print(arr);
	

}

void sort(int* ptr)
{
	int i, k;
	int tmp = 0;


	for (i = 0; i < 4; i++) {
		for (k = 0; k < 4; k++) {
			if (ptr[k] > ptr[k + 1]) {
				tmp = ptr[k];
				ptr[k] = ptr[k + 1];
				ptr[k + 1] = tmp;
			}
		}
	}

}

void print(int* ptr)
{
	int i;
	for (i = 0; i < 5; i++) {
		cout << i+1<< ".  " << ptr[i] << endl;
	}
}