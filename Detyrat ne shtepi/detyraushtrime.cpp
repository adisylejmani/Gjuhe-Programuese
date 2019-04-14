//#include<iostream>
//using namespace std;
//void main() {
//	const int m = 7;
//	int A[m] = { 5,3,2,-3,6,7,10 };
//	cout << "Vargu para kthimit: ";
//	for (int i = 0; i < m; i++)
//	{
//		cout << A[i] << "  ";
//	}
//	cout << endl;
//	int i = 0;
//	do
//	{
//		int x = A[i];
//		A[i] = A[m - 1 - i];
//		A[m - 1 - i] = x;
//
//		i++;
//	} while (i<m/2);
//	cout << "Vargu pas kthimit: ";
//	for (int i = 0; i < m; i++)
//	{
//		cout << A[i] << "  ";
//	}
//	cout << endl;
//}