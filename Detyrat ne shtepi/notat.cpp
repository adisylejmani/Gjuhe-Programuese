//#include<iostream>
//#include<limits>
//#include<iomanip>
//using namespace std;
//void main() {
//	const int n = 5;
//	int A[n];
//	int i = 0;
//	int c = 0;
//	int c_neg = 0;
//	int max=INT_MIN;
//	double mes;
//	long long int  P = 1;
//	int S = 0;
//	cout << "REZULTATI I PROVIMIT!\n";
//	do
//	{
//		cout << "Cakto piket e studentit " << i + 1 << ":";
//		cin >> A[i];
//		if (A[i] > max)
//			max = A[i];
//		if (A[i] >= 50) {
//			c++;
//		}
//		else if (A[i] < 0)
//			c_neg++;
//		S = S + A[i];
//		P = P * A[i];
//		i++;
//	} while (i<n);
//	mes = (double)S / n;
//	cout << "Numri i studentve qe e kan\x89 kaluar provimin:" << c << endl;
//	cout << "Piket maksimale ne provim jane:" <<setw(5)<<setfill('!')
//		<< max << endl;
//	cout << "Nr i studentve me pike negative:" << c_neg << endl;
//	cout << "Mesatarja e pikeve:" << mes << endl;
//	cout << "Prodhimi i antareve:" << P << endl;
//}