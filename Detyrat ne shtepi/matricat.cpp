//#include<iostream>
//#include<iomanip>
//using namespace std;
//void main() {
//	const int a = 3, b = 3;
//	int A[a][b];
//	double mes;
//	int s = 0,c=0,p=1,r=0;
//	cout << "Vlerat e matrices:\n";
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
//			cin >> A[i][j];
//		}
//	}
//	cout << "Matrica e formuar A: \n";
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			s = s + A[i][j];
//			cout <<setw(5)<< A[i][j];
//			if (i==j)
//			{
//				p = p * A[i][j];
//			}
//			if (A[i][j]<0)
//			{
//				c++;
//			}
//			if (i<j&&A[i][j]>0)
//			{
//				r++;
//			}
//		}
//		cout << endl;
//	}
//
//	mes = (double)s / (a*b);
//	cout << "Nr i vlerave negative eshte " << c << endl;
//	cout << "Mesatarja=" << mes << endl;
//	cout << "Prodhimi :" << p << endl;
//	cout << "Antaret mbi diagonale dhe pozitiv :" << r << endl;
//}