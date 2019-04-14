//#include<iostream>
//using namespace std;
//void main() {
//	const int n=5;
//	int A[n];
//	int i = 0,S=0;
//	double mes;
//	char V[] = "-----------------------------------";
//
//	cout << "Me posht jepni moshen e antareve: "<<endl;
//	do
//	{
//		cout << "Antari i " << i + 1 << ": ";
//		cin >> A[i];
//		S = S + A[i];
//		i++;
//	} while (i<n);
//	cout << "\nVargu: ";
//	for  (i = 0; i < n; i++)
//	{	
//		cout << A[i];
//		if (i < n - 1)
//		{
//			cout << ", ";
//		}
//		else
//			cout << ".\n";
//	}
//	cout << V;
//	mes = (double)S / n;
//	cout << "\nVlera mesatare e vargut: " << mes << endl;
//	cout << V;
//}