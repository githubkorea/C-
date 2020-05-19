#include<iostream>
using namespace std;

void main()
{
	//int a, b;
	//cout << "첫번째 숫자를 입력하세요 : ";
	////cin>>a,b >> 숫자 두개를 입력받는 법
	//cin >> a;
	//cout << "두번째 숫자를 입력하세요 :";
	//cin >> b;
	//cout << "a = " << a << endl << "b = " << b << endl;
	//cout << "Large Number = ";
	//a > b ? cout << a << "이(가) 더 크다." << endl 
	//	: cout << b << "이(가) 더 크다." << endl;


	// take 1
	/*int i, j, k, MAX, MIN;
	cout << "숫자 3개를 입력하세요 : ";
	cin >> i >> j >> k;
	cout << "MAX = ";
	i > k ? cout << i << "이(가) 더 크다." << endl
		: cout << k << "이(가) 더 크다." << endl;
	k > j ? cout << k << "이(가) 더 크다 " << endl
		: cout << j << "이(가) 더 크다. " << endl;


	cout << "MIN = ";
	i > k ? cout << k << "이(가) 더 작다." << endl
		: cout << i << "이(가) 더 작다." << endl;
	k > j ? cout << j << "이(가) 더 작다." << endl
		: cout << k << "이(가) 더 작다." << endl;*/


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
		cout << "숫자 3개를 입력하세요 : ";
		cin >> i >> j >> k;
		MAX = (i > j) ? ((i > k) ? i : k) : ((j>k)? j : k);
		MIN = (i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);
		cout << "MAX = " << MAX << endl;
		cout << "MIN = " << MIN << endl;*/

		/*int n, n1, n2, n3, n4, n5;
		cout << " 금액 입력 하세요 : ";
		cin >> n;
		cout << n << "은 " << endl;*/


// take 1 98860
int n, n1, n2, n3, n4, n5, n6;
cout << "다섯자리 수를 입력 하세요. : ";
cin >> n;
cout << n << " 원은 " << endl;
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
cout << "만원짜리 : " << n1 << "개" << endl;
cout << "오천원짜리 : " << n2 << "개" << endl;
cout << "천원짜리 : " << n3 << "개" << endl;
cout << "오백원짜리 : " << n4 << "개" << endl;
cout << "백원짜리 : " << n5 << "개" << endl;
cout << "십원짜리 : " << n6 << "개" << endl;

//// take 2
//	int n, n1, n2, n3, n4, n5;
//	printf("금액을 입력하세요 : ");
//	scanf("%d", &n,&n1,&n2, &n3, &n4, &n5,);
//
//	if (n > 10000)
//	{
//		// 먼원의 개수를 알려준다.
//		printf(" 만원짜리 : %d\n ", n / 10000);
//		n = n - 10000 * (n / 10000);
//	}
//	if (n1 > 5000)
//	{
//		// 천원짜리의 개수를 알려준다.
//		printf(" 오천원짜리 : %d\n", n1 / 5000);
//		n1 = n1 - 5000 * (n1 / 5000);
//	}
//
//	if (n2 > 1000)
//	{
//		// 천원짜리의 개수를 알려준다.
//		printf(" 천원짜리 : %d\n", n2 / 1000);
//		n2 = n2 - 1000 * (n2 / 1000);
//	}
//
//	if (n3 > 500)
//	{
//		// 오백원짜리의 개수를 알려준다.
//		printf(" 오백원짜리 : %d\n", n3 / 500);
//		n3 = n3 - 1000 * (n3 / 500);
//	}
//	if (n4 > 100)
//	{
//		// 백원짜리의 개수를 알려준다.
//		printf(" 백원짜리 : %d\n", n4 / 100);
//		n4 = n4 - 100 * (n4 / 100);
//	}
//	if (n5 > 10)
//	{
//		// 십원짜리의 개수를 알려준다.
//		printf(" 십원짜리 : %d\n", n5 / 10);
//		n5 = n5 - 10 * (n5 / 10);
//	}
//	return 0;
}