//#include<iostream>
//#include<iomanip>
//#include<limits>
//using namespace std;
//const int a = 2, b = 3;
//void vleratematrices(int A[a][b]);
//double mesatrajematrices(int A[a][b]);
//int maxematrices(int A[a][b]);
//int numro(int A[a][b], int c);
//void formomatrice(int A[a][b], int B[a][b]);
//void shtypjamatrices(int A[a][b],char e);
//void main() {
//	int A[a][b],B[a][b];
//	int x;
//	cout << "jep vleren e x: ";
//	cin >> x;
//	vleratematrices(A);
//	cout << "Mesatarja: " << mesatrajematrices(A) << endl;
//	cout << "MAX: " << maxematrices(A) << endl;
//	cout << "Numri i vlerave te barabarta me " << x << " eshte " << numro(A, x) << endl;
//	formomatrice(A, B);
//	shtypjamatrices(A,'A');
//	shtypjamatrices(B,'B');
//	}
//	void vleratematrices(int A[a][b]){
//		
//
//		cout << "Vlerat e matrices:\n";
//			for (int i = 0; i < a; i++)
//			{
//				for (int j = 0; j < b; j++)
//				{
//					cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
//					cin >> A[i][j];
//				}
//			}
//	
//		
//	}
//	double mesatrajematrices(int A[a][b]) 
//	{
//		int s = 0;
//		double mes;
//
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j < b; j++)
//			{
//				s = s + A[i][j];
//				
//			}
//		}
//		mes =(double) s / (a*b);
//		return mes;
//	}
//	int maxematrices(int A[a][b]) 
//	{
//		int max = INT_MIN;
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j < b; j++)
//			{
//				if (A[i][j]>max)
//				{
//					max = A[i][j];
//				}
//			}
//		}
//		return max;
//	}
//	int numro(int A[a][b], int c) 
//	{
//		int k = 0;
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j < b; j++)
//			{
//				if (A[i][j]==c)
//				{
//					k++;
//				}
//			}
//		}
//
//		return k;
//	}
//	void formomatrice(int A[a][b], int B[a][b])
//	{
//		for (size_t i = 0; i < a; i++)
//		{
//			for (size_t j = 0; j < b; j++)
//			{
//				if (A[i][j]%2==0)
//				{
//					B[i][j] = A[i][j] + 1;
//				
//				}
//				else
//				{
//					B[i][j] = A[i][j] - 1;
//				}
//			}
//		}
//		
//	
//	}
//	void shtypjamatrices(int A[a][b],char e) 
//	{
//		cout << "Matrica " << e << " :\n";
//		for (size_t i = 0; i < a; i++)
//		{
//			for (size_t j = 0; j < b; j++)
//			{
//				cout << A[i][j] << " ";
//			}
//			cout << endl;
//		}
//
//	}