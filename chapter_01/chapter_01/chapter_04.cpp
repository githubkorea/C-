#include<iostream>
using namespace std;

void main()
{
	//int a, b;
	//cout << "ù��° ���ڸ� �Է��ϼ��� : ";
	////cin>>a,b >> ���� �ΰ��� �Է¹޴� ��
	//cin >> a;
	//cout << "�ι�° ���ڸ� �Է��ϼ��� :";
	//cin >> b;
	//cout << "a = " << a << endl << "b = " << b << endl;
	//cout << "Large Number = ";
	//a > b ? cout << a << "��(��) �� ũ��." << endl 
	//	: cout << b << "��(��) �� ũ��." << endl;


	// take 1
	/*int i, j, k, MAX, MIN;
	cout << "���� 3���� �Է��ϼ��� : ";
	cin >> i >> j >> k;
	cout << "MAX = ";
	i > k ? cout << i << "��(��) �� ũ��." << endl
		: cout << k << "��(��) �� ũ��." << endl;
	k > j ? cout << k << "��(��) �� ũ�� " << endl
		: cout << j << "��(��) �� ũ��. " << endl;


	cout << "MIN = ";
	i > k ? cout << k << "��(��) �� �۴�." << endl
		: cout << i << "��(��) �� �۴�." << endl;
	k > j ? cout << j << "��(��) �� �۴�." << endl
		: cout << k << "��(��) �� �۴�." << endl;*/


		/*cout << "MAX = " << MAX << endl;
		cout << "MIN = " << MIN << endl;*/

		// take 2
		/*int i, j, k, MAX, MIN;

		i > (j > k ? MAX = j : MAX = k) ? MAX = i : MAX;
		cout << "MAX = " << MAX << endl;

		i > (j > k ? MIN = k : MIN = j) ? MIN : MIN = i;
		cout << "MIN = " << MIN << endl;*/


		// take 3
		/*int i, j, k, MAX, MIN;
		cout << "���� 3���� �Է��ϼ��� : ";
		cin >> i >> j >> k;
		MAX = (i > j) ? ((i > k) ? i : k) : ((j>k)? j : k);
		MIN = (i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);
		cout << "MAX = " << MAX << endl;
		cout << "MIN = " << MIN << endl;*/

		/*int n, n1, n2, n3, n4, n5;
		cout << " �ݾ� �Է� �ϼ��� : ";
		cin >> n;
		cout << n << "�� " << endl;*/


// take 1 98860
int n, n1, n2, n3, n4, n5, n6;
cout << "�ټ��ڸ� ���� �Է� �ϼ���. : ";
cin >> n;
cout << n << " ���� " << endl;
n1 = n / 10000;	// 9
n = n - n1 * 10000;	// 8860
n2 = n / 5000;	// 1
n = n % 5000;	// 3860
n3 = n / 1000;	// 3
n = n % 1000;	// 860
n4 = n / 500;	// 1
n = n % 500;	// 360
n5 = n / 100;	// 3
n = n % 100;	// 60
n6 = n / 10;	// 6
cout << "����¥�� : " << n1 << "��" << endl;
cout << "��õ��¥�� : " << n2 << "��" << endl;
cout << "õ��¥�� : " << n3 << "��" << endl;
cout << "�����¥�� : " << n4 << "��" << endl;
cout << "���¥�� : " << n5 << "��" << endl;
cout << "�ʿ�¥�� : " << n6 << "��" << endl;

//// take 2
//	int n, n1, n2, n3, n4, n5;
//	printf("�ݾ��� �Է��ϼ��� : ");
//	scanf("%d", &n,&n1,&n2, &n3, &n4, &n5,);
//
//	if (n > 10000)
//	{
//		// �տ��� ������ �˷��ش�.
//		printf(" ����¥�� : %d\n ", n / 10000);
//		n = n - 10000 * (n / 10000);
//	}
//	if (n1 > 5000)
//	{
//		// õ��¥���� ������ �˷��ش�.
//		printf(" ��õ��¥�� : %d\n", n1 / 5000);
//		n1 = n1 - 5000 * (n1 / 5000);
//	}
//
//	if (n2 > 1000)
//	{
//		// õ��¥���� ������ �˷��ش�.
//		printf(" õ��¥�� : %d\n", n2 / 1000);
//		n2 = n2 - 1000 * (n2 / 1000);
//	}
//
//	if (n3 > 500)
//	{
//		// �����¥���� ������ �˷��ش�.
//		printf(" �����¥�� : %d\n", n3 / 500);
//		n3 = n3 - 1000 * (n3 / 500);
//	}
//	if (n4 > 100)
//	{
//		// ���¥���� ������ �˷��ش�.
//		printf(" ���¥�� : %d\n", n4 / 100);
//		n4 = n4 - 100 * (n4 / 100);
//	}
//	if (n5 > 10)
//	{
//		// �ʿ�¥���� ������ �˷��ش�.
//		printf(" �ʿ�¥�� : %d\n", n5 / 10);
//		n5 = n5 - 10 * (n5 / 10);
//	}
//	return 0;
}