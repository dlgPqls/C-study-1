#include <iostream>
#include <string>

using namespace std;

int main()
{
	char name[10];
	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;

	char birth[100];
	cout << "������ �Է��ϼ���: ";
	getchar();
	cin.getline(birth, 100);

	int age;
	cout << "���̸� �Է��ϼ���: ";
	cin >> age;

	string major;
	cout << "�а��� �Է��ϼ���: ";
	getchar();
	getline(cin, major);

	cout << endl << "=================================" << endl;
	cout << "<ȸ�� ����>" << endl;
	cout << "�̸�: " << name << endl;
	cout << "����: " << birth << endl;
	cout << "����: " << age << endl;
	cout << "�Ҽ� �а�:" << major;

}