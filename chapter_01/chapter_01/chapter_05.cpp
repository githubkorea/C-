#include<iostream>
//
using namespace std;
//// 1.
//void main() {
//	//// ¦�� 
//	//int n;
//	//cout << "���ڸ� �Է� �ϼ��� : ";
//	//cin >> n;
//	//if (n % 2 == 0)
//	//	cout << n << " �� ¦���Դϴ�." << endl;
//	//else
//	//	cout << n << " �� Ȧ���Դϴ�. " << endl;
//
//
//
//
//
//// 2.
//// 10�� ���
////void main()
////{
////	int n;
////	cout << "���ڸ� �Է��ϼ��� : ";
////	cin >> n;
////	if (n % 10 == 0)
////		cout << n << " �� 10�� ��� �Դϴ�." << endl;
////	else 
////		cout << n << " �� 10�� ����� �ƴմϴ�." << endl;
////}
//
//// 3.
////void main()
////{
////	int a;
////	cout << "���ڸ� �Է��ϼ��� : ";
////	cin >> a;
////	if (a > 10)
////		cout << a << " ; 10���� ū �� �Դϴ�. " << endl;
////	else
////		cout << a << " : 10���� ���� �� �Դϴ�. " << endl;
////}
//
//
//// 4.
////void main()
////{
////	int num1, num2;
////	cout << "ù���� ���� �Է� : ";
////	cin >> num1;
////	cout << "�ι�° ���� �Է� :";
////	cin >> num2;
////	cout << "�� ���� �� �м� ����� :";
////
////	if (num1 >= num2)
////	{
////		if (num1 == num2)
////			cout << num1 << " ��" << num2 << " ��(��) ���� �� �Դϴ�."<<endl;
////		else
////			cout << num1 << " ��" << num2 << " ���� ū �� �Դϴ�."<<endl;
////	}
////	else
////		cout << num1 << " ��" << num2 << "���� ���� �� �Դϴ�. " << endl;
////
////}
//
//	int n;
//	cout << "���ڸ� �Է��ϼ��� : ";
//	cin >> n;
//	if (n % 5 == 0)
//		cout << n << " �� 5�� ��� �Դϴ�." << endl;
//	else 
//
//		cout << n << " ��(��) 5�� ����� �Ǳ� ���ؼ�","%d"<<(n%5)<< "�ʿ�!" << endl;
//		cout << ((n + (5-1)) & ~(5-1));
//
//	int num, d;
//	cout << "���ڸ� �Է��ϼ��� : ";
//	cin >> num;
//	if (n % 5 == 0)
//		cout << n << " �� 5�� ��� �Դϴ�." << endl;
//	else
//		d = 5 - num % 5;
//		cout << num << " �� 5�� ����� �Ǳ� ���ؼ� " << d << "�ʿ�! " << endl;
//		
//	int num1, num2, d;
//	cout << "�м��� �Է��ϼ��� : ";
//	cin >> num2;
//	num2 = 5 - (num1 % 5);
//	d = num1 % 5;
//	if (num1 % num2 == 0)
//		cout << "���� " << num1 << " ��" << num2 << "�� ��� �Դϴ�." << endl;
//	else
//		cout << num1 << " ��(��) " << num2 << "�� ����� �Ǳ� ���ؼ� " << d << endl;
//		cout << num1 << "�� ����� �Ǳ� ���ؼ� " << d << "��ŭ ������ �մϴ�." << endl;
//}
//
//#include <iostream>
//
//using namespace std;
//
//void main()
//{
//	////¦��
//	//int n;
//	//cout << "���ڸ� �Է��ϼ��� : ";
//	//cin >> n;
//	//if (n % 2 == 0)
//	//cout << n << "�� ¦���Դϴ�." << endl;
//	//else
//	//	cout << n << "�� Ȧ���Դϴ�." << endl;
//
//	////10�� ���
//	//int dat;
//	//cout << "���ڸ� �Է��ϼ��� : ";
//	//cin >> dat;
//	//if (dat % 10 == 0)
//	//cout << dat << "�� 10�� ����Դϴ�." << endl;
//	//else
//	//	cout << dat << "�� 10�� ����� �ƴմϴ�." << endl;
//
//	//int a;
//	//cout << "���ڸ� �Է��ϼ��� : ";
//	//cin >> a;
//	//if (a > 10)
//	//	cout << a << "�� 10���� ū �� �Դϴ�." << endl;
//	//else
//	//	cout << a << "�� 10���� ���� �� �Դϴ�." << endl;
//
//	/*int num1, num2;
//	cout << "ù��° ���� �Է� : ";
//	cin >> num1;
//	cout << "�ι�° ���� �Է� : ";
//	cin >> num2;
//	cout << "�� ���� �� �м� ����� : ";
//
//	if (num1 >= num2)
//	{
//		if (num1 == num2)
//			cout << num1 << "�� " << num2 << " ��(��) ���� �� �Դϴ�.";
//		else
//			cout << num1 << "��(��) " << num2 << " ���� ū �� �Դϴ�.";
//	}
//	else
//		cout << num1 << "��(��) " << num2 << " ���� ���� �� �Դϴ�.";*/
//	int a;
//	cout << "���ڸ� �Է��ϼ��� : ";
//	cin >> a;
//	if (a % 5 >= 0)
//	{
//		if (a % 5 == 0)
//			cout << a << " ��(��) 5�� ����Դϴ�.";
//		else
//			cout << a << " ��(��) 5�� ����� �Ǳ� ���ؼ� " << 5 - a % 5 << " �ʿ�!" << endl;
//	}
//	int num1, num2;
//	cout << "�м��� ���ڸ� �Է� : ";
//	cin >> num1;
//	cout << "��� ���ڸ� �Է� : ";
//	cin >> num2;
//	if (num1%num2 == 0)
//		cout << "���� " << num1 << " ��" << num2 << "�� ����Դϴ�. " << endl;
//	else
//		cout << num1 << " ��(��)" << num1 << " �� ����� �Ǳ� ���ؼ� " << num1 - num1 % num2 << endl;
//	int num1, num2, d;
//	cout << "�м��� ���ڸ� �Է� : ";
//	cin >> num1;
//	num2 = 5 - (num1 % 5);
//	d = num1 % 5;
//	if (num1%num2 == 0)
//		cout << "���� " << num1 << " ��" << num2 << "�� ����Դϴ�." << endl;
//	else
//	{
//		cout << num1 << " �� ����� �Ǳ� ���ؼ� " << num2 << " �ʿ�!" << endl;
//		cout << num1 << " �� ����� �Ǳ� ���ؼ� " << d << " ��ŭ ������ �մϴ�!" << endl;
//	}
//}
//

// 6.
void main()
{
	//int num1, num2, num3;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> num1;
	//num2 = 5 - (num1 % 5);
	//num3 = num1 % 5;

	//if (num1% 5 == 0) {
	//	cout << "5�� ��� �Դϴ�.";
	//}
	//else
	//{
	//	cout << num1 << "��(��) 5�� ����� �Ƿ��� " << num2 << " ��ŭ �ʿ��մϴ�." << endl;
	//	cout << " �Ǵ� " << num3 << "��ŭ ������ �մϴ�!!" << endl;
	//}
	//{

	//}
	
	// 7.
	//char ch;
	//cout << "���ڸ� �Է��ϼ��� : ";
	//cin >> ch;
	//if (ch >= 'A' && ch <= 'Z')	// 65���� 94 ������ ���� �Է�?
	//	cout << "Upper case" << endl;	// Upper cas : �빮�� / Lower case : �ҹ���
	//else if (ch >= 'a' && ch <= 'z')
	//	cout << "Lower case" << endl;
	//else
	//	cout << "No Good" << endl;


	// 8.
	int kor, eng, tot;
	double avg;
	cout << "���� ���� :";
	cin >> kor;
	cout << "���� ���� :";
	cin >> eng;
	tot = kor + eng;
	avg = tot / 2.0;

	//if (avg >= 90)
	//	cout << "��" << endl; 
	//else if (avg >= 80)
	//	cout << "��" << endl;
	//else 
	//	cout << "��" << endl;

	if (avg >= 90)
		cout << "������ : " << 'A' << "�Դϴ�." << endl;
	else if (avg >= 80)
		cout << "������ : " << 'B' << "�Դϴ�." << endl;
	else if (avg >= 70)
		cout << "������ : " << 'C' << "�Դϴ�." << endl;
	else if (avg >= 60)
		cout << "������ : " << 'C' << "�Դϴ�." << endl;
	else if (avg >= 50)
		cout << "������ : " << 'C' << "�Դϴ�." << endl;
	else
	{
		cout << "������ : " << 'F' << "�Դϴ�." << endl;
	}










	
}