#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "First number>>";
	cin >> a;

	cout << "Second number>>";
	cin >> b;

	cout << "========��� ���========" << endl;
	cout << a << "+" << b << "=" << a + b << endl;
	cout << a << "-" << b << "=" << a - b << endl;
	cout << a << "*" << b << "=" << a * b << endl;
	cout << a << "/" << b << "=" << a / (float)b; // ����/����=������ ��µǱ� ������ ĳ��Ʈ �����ڸ� ����Ͽ� �Ǽ� ���
}