#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
	int kor, eng, tot, rest;
	double avg;
	cout << "���� ���� :";
	cin >> kor;
	cout << "���� ���� :";
	cin >> eng;
	tot = kor + eng;
	avg = tot / 2.0;
	rest = avg / 10;

	/*switch (rest)
	{
	case 10:
			cout << "A+";
			break;
	case 9:
			cout << "A";
			break;
		
	case 8:
			cout << "B";
			break;

	case 7:
			cout << "C";
			break;

	case 6:
		cout << "D";
			break;
					
	default:
		cout << "F";
		break;
	}*/

	//switch (rest)
	//{
	//case 10:
	//	cout << "������ : A+ �Դϴ� " << endl;
	//	break;
	//case 9:
	//	cout << "������ : A �Դϴ� " << endl;
	//	break;
	//case 7:
	//	cout << "������ : B �Դϴ� " << endl;
	//	break;
	//case 6:
	//	cout << "������ : C �Դϴ� " << endl;
	//	break;
	//case 5:
	//	cout << "������ : D �Դϴ� " << endl;
	//	break;
	//default:
	//	cout << "������ : F �Դϴ� " << endl;
	//	break;
	//}


	int a, b;
	char op;
	cout << "�� ���� �Է��ϼ���";
	cin >> a >> b;
	cout << "�����ڸ� �Է��ϼ��� (+,-,*,/)" << endl;
	cin >> op;
	
	//add = a + b;
	//sub = a - b;
	//div = a / b;
	//mul = a * b;


	//switch (op)
	//{
	//case 1:
	//	cout << ""
	//
	//default:
	//	break;
	//}

	switch (op)
	{
	case '+':
		cout << "�� ���� ���� " << a + b << "�Դϴ�";
		break;
	case '-':
		cout << "�� ���� ���� " << a - b << "�Դϴ�";
		break;
	case '/':
		cout << "�� ���� ������� " << a / b << "�Դϴ�";
		break;
	case '*':
		cout << "�� ���� ���� " << a * b << "�Դϴ�";
		break;
	default:
		cout << "�����ڸ� Ȯ���� �ּ���";
		break;
	}

}