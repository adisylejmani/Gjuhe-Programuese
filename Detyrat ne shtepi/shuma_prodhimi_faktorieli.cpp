//#include<iostream>
//using namespace std;
//int shuma(int n, int g);
//int prodhimi(int n);
//int faktorieli(int n);
//void main() 
//{
//	int n,g;
//	cout << "Jepni vleren maksimale: ";
//	cin >> n;
//	cout << "Cili numer te tejkalohet: ";
//	cin >> g;
//	cout << "shuma=" << shuma(n, g) << endl;
//	cout << "prodhimi=" << prodhimi(n) << endl;
//	cout << "faktorieli=" << faktorieli(n);
//}
//int shuma(int n, int g)
//{
//	int i = 1, s = 0;
//	do
//	{
//		if (i != g)
//			s = s + i;
//		i++;
//	} while (i<=n);
//	return s;
//}
//int prodhimi(int n) 
//{
//	int p = 1;
//	for (int  i = 2; i <= n; i=i+2/* ose i+=2*/)
//	{
//		p = p * i;
//	}
//	return p;
//}
//int faktorieli(int n)
//{
//	int i = 1, f = 1;
//
//	while (i<=n)
//	{
//		f = f * i;
//		i++;
//	}
//	return f;
//}