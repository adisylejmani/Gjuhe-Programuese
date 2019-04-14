//#include<iostream>
//#include<limits>
//using namespace std;
//void shtypja(int A[], int n);
//void leximi(int A[], int n);
//double mesatarja(int A[], int n);
//int max(int A[], int n);
//int dallimi(int A[], int n);
//void main()
//{
//	const int n = 5;
//	int A[n];
//	leximi(A, n);
//	shtypja(A, n);
//	cout << "Vlera mesatare e vektorit: "
//		<< mesatarja(A, n) << endl;
//	cout << "Vlera maksimale e vektorit: "
//		<< max(A, n) << endl;
//	cout << "Diferenca ne mes te " << A[n - 1]
//		<< " dhe " << A[0] << " eshte: "
//		<< dallimi(A, n);
//
//
//}
//void shtypja(int A[], int n){
//	cout << "Vektori A : ";
//	for (int i = 0; i <n; i++)
//	{
//		cout << A[i] << " ";
//	}
//	cout << endl;
//}
//void leximi(int A[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Antari i " << i + 1<<": ";
//		cin >> A[i];
//	}
//}
//double mesatarja(int A[], int n)
//{
//	int s=0;
//	double mes;
//	for (int i = 0; i < n; i++)
//	{
//		s = s + A[i];
//	}
//	mes = (double)s / n;
//	return mes;
//}
//int max(int A[], int n)
//{
//	int max = INT_MIN;
//	for (int i = 0; i < n; i++)
//	{
//		if (A[i]>max)
//		{
//			max = A[i];
//		}
//	}
//	return max;
//}
//int dallimi(int A[], int n)
//{
//	int y;
//	y = A[n - 1] - A[0];
//	return y;
//}