#include <iostream>
using namespace std;

int main()
{
	int menu, num; // ��ȣ ���� ����, �� ���� ����
	int i, j, k, m; // for������ ����� ����

	do // �޴� â�� ���� ����ؾ��ϱ� ������ do~while �� ���
	{
		cout << "---------�� ��� �ý���---------" << endl;
		cout << "����� ���� ����� �������ּ���." << endl;
		cout << "1. �����ﰢ��" << endl;
		cout << "2. ���ﰢ��" << endl;
		cout << "3. ����" << endl;
		cout << "4. ������" << endl;
		cin >> menu;

		switch (menu) // �޴��� �������̹Ƿ� switch~case �� ����� �ξ� ����
		{
		case 1:
			cout << endl << "�����ﰢ���� �����ϼ̽��ϴ�." << endl;
			cout << "���� ������ �������ּ���." << endl;
			cin >> num;
			cout << endl;
			for (i = 1; i <= num; i++)
			{
				for (k = 0; k <= num - i; k++)
					cout << " ";
				for (j = 1; j <= i; j++)
					cout << "*";

				cout << endl;
			}
			/* 24��~ 32�� for�� ����
			num=4��� �������� ��,
			i=1�� ��, k=0,1,2,3�� �� ���� �� ĭ ���, �� �� j=1�� ������ * ��� �ݺ�
			���� �� �� i ������Ű�鼭 ��� �ݺ�
			���� �ﰢ�� �� ���� �� �ڵ带 ���ݾ� �����ذ��� �ڵ带 ®���ϴ�. */

			cout << endl;
			for (i = 1; i <= num; i++)
			{
				for (k = 0; k <= num - i; k++)
					cout << "*";
				for (j = 1; j <= i; j++)
					cout << " ";

				cout << endl;
			}
			cout << endl;
			for (i = 1; i <= num; i++)
			{
				for (k = 1; k < i; k++)
					cout << " ";
				for (j = 1; j <= num - i + 1; j++)
					cout << "*";

				cout << endl;
			}
			cout << endl;
			break;

		case 2:
			cout << endl << "���ﰢ���� �����ϼ̽��ϴ�." << endl;
			cout << "���� ������ �������ּ���." << endl;
			cin >> num;
			cout << endl;
			for (i = 1; i <= num; i++) // �Է��� �� ����ŭ �ݺ�
			{
				for (k = 0; k < num - i; k++) 
					cout << " ";
				for (j = 1; j <= i * 2 - 1; j++)
					cout << "*";
				
				cout<<endl;
			}
			cout << endl;
			break;

		case 3:
			cout << endl << "���� �����ϼ̽��ϴ�." << endl;
			num = 0; // �Ʒ� if���� ���� �����ϵ��� num�� 0���� ���� �ʱ�ȭ
			while (num % 2 == 0) // num�� Ȧ���� �Էµ� ������ �ݺ�
			{
				cout << "Ȧ���� �Է����ּ���:";
				cin >> num;
			}
			cout << endl;
			for (i = 1; i <= num / 2; i++) // ���� ���η� �߶��� ���� ���κ�
			{
				for (k = 1; k <= i; k++)
					cout << "*";
				for (j = num - i * 2; j >= 1; j--)
					cout << " ";
				for (m = 1; m <= i; m++)
					cout << "*";
				cout << endl;
			}
			for (i = 1; i <= num; i++) // ������ ��� ��
				cout << "*";

			cout << endl;
			for (i = num / 2; i >= 1; i--) // ���� ���η� �߶��� ���� �Ʒ��κ�
			{                              // ���κ� ����� �� �� �ڵ� �Ųٷ� Ȱ���ؼ� �ۼ�
				for (k = 1; k <= i; k++)
					cout << "*";
				for (j = num - i * 2; j >= 1; j--)
					cout << " ";
				for (m = 1; m <= i; m++)
					cout << "*";
				cout << endl;
			}
			cout << endl;
			break;

		case 4:
			cout << endl << "�����⸦ �����ϼ̽��ϴ�." << endl;
			cout << "�����մϴ�." << endl;
			break;

		default:
			cout << endl << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���." << endl << endl;
			// �� ����� ���� �׳� �� �� �߰��غý��ϴ�
		}
	} while (menu != 4); // 4 �Է��� ������ �ݺ�
}