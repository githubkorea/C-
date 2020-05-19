#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
	int kor, eng, tot, rest;
	double avg;
	cout << "국어 점수 :";
	cin >> kor;
	cout << "영어 점수 :";
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
	//	cout << "학점은 : A+ 입니다 " << endl;
	//	break;
	//case 9:
	//	cout << "학점은 : A 입니다 " << endl;
	//	break;
	//case 7:
	//	cout << "학점은 : B 입니다 " << endl;
	//	break;
	//case 6:
	//	cout << "학점은 : C 입니다 " << endl;
	//	break;
	//case 5:
	//	cout << "학점은 : D 입니다 " << endl;
	//	break;
	//default:
	//	cout << "학점은 : F 입니다 " << endl;
	//	break;
	//}


	int a, b;
	char op;
	cout << "두 수를 입력하세요";
	cin >> a >> b;
	cout << "연산자를 입력하세요 (+,-,*,/)" << endl;
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
		cout << "두 수의 합은 " << a + b << "입니다";
		break;
	case '-':
		cout << "두 수의 차는 " << a - b << "입니다";
		break;
	case '/':
		cout << "두 수의 나누기는 " << a / b << "입니다";
		break;
	case '*':
		cout << "두 수의 곱은 " << a * b << "입니다";
		break;
	default:
		cout << "연산자를 확인해 주세요";
		break;
	}

}