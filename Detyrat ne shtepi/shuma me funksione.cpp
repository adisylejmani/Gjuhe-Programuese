//#include<iostream>
//using namespace std;
//int shuma(int c, int d, int k, int l, int m);
//void main()
//{
//	int a,z;
//	cout << "Jepni vleren e a: ";
//	cin >> a;
//	if (a<3)
//	{
//		z = 1 + shuma(2, a + 2, 1, 0, 3);
//	}
//	else
//	{
//		z = a + shuma(1, a, 2, 1, 1);
//	}
//	cout << "Z= " << z;
//
//}
//int shuma(int c, int d, int k, int l, int m)
//{
//	int i = c, S = 0;
//	do
//	{
//		S = S + (k*i*i + l * i + m);
//
//		i++;
//	} while (i <= d);
//
//	return S;
//}