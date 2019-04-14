//#include<iostream>
//using namespace std;
//const int a = 5, b = 5;
//void matrica(int katrore[a][b])
//{
//	for (size_t i = 0; i < a; i++)
//	{
//		for (size_t j = 0; j < b; j++)
//		{
//			if (i==0||j==0||i==a-1||j==b-1)
//			{
//				katrore[i][j] = 1;	
//			}
//			else
//			{
//				katrore[i][j] = 0;
//			}
//			cout << katrore[i][j] << " ";
//		}
//		cout << endl;
//	}
//		
//}
//void matricanjesi(int katrore[a][b])
//{
//	for (size_t i = 0; i < a; i++)
//	{
//		for (size_t j = 0; j < b; j++)
//		{
//			if (i==j)
//			{
//				katrore[i][j] = 1;
//			}
//			else
//			{
//				katrore[i][j] = 0;
//			}
//			cout << katrore[i][j]<<" ";
//		}
//		cout << endl;
//	}
//}
//void matricambidiagonale(int katrore[a][b])
//{
//	for (size_t i = 0; i < a; i++)
//	{
//		for (size_t j = 0; j < b; j++)
//		{
//			if (i == j)
//			{
//				katrore[i][j] = 1;
//			}
//			else if (i<j)
//			{
//				katrore[i][j] = j + 1;
//			}
//			else
//			{
//				katrore[i][j] = 0;
//			}
//			cout << katrore[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void matricanendiagonale(int katrore[a][b])
//{
//	for (size_t i = 0; i < a; i++)
//	{
//		for (size_t j = 0; j < b; j++)
//		{
//			if (i == j)
//			{
//				katrore[i][j] = 1;
//			}
//			else if (i > j)
//			{
//				katrore[i][j] = i + 1;
//			}
//			else
//			{
//				katrore[i][j] = 0;
//			}
//			cout << katrore[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//double matricames(int katrore[a][b])
//{
//	int s = 0;
//	for (size_t i = 0; i < a; i++)
//	{
//		for (size_t j = 0; j < b; j++)
//		{
//			s = s + katrore[i][j];
//		}
//	}
//	return (double)s / (a*b);
//}
//void main()
//{
//	int A[a][b];
//	matrica(A);
//	cout << "\n\n";
//	matricanjesi(A);
//	cout << "\n\n";
//	matricambidiagonale(A);
//	cout << "\n\n";
//	matricanendiagonale(A);
//	cout << "\n\n";
//	cout << "Mesatarja e A: " << matricames(A) << endl;
//}