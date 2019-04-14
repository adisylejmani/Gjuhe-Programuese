//#include<iostream>
//#include<iomanip>
//#include<limits>
//using namespace std;
//void main() {
//	const int rr = 5;
//	int A[rr];
//	int i = 0, c = 0,s=0;
//	int max = INT_MIN;
//	double mes;
//	cout << "Rrogat!!\n";
//	do
//	{
//		cout << "Rroga e puntorit " << i + 1 << " :";
//		cin >> A[i];
//		if (A[i]<300||A[i]>2000)
//		{
//			cout << "Nuk ka kesi rroge ne kompani!\nShtypni nje rroge brenda limitit(300-2000)\n";
//			continue;
//		}
//		if (A[i]>700)
//		{
//			c++;
//		}
//		s = s + A[i];
//		if (A[i]>max)
//		{
//			max = A[i];
//		}
//		i++;
//	} while (i<rr);
//	mes = (double)s/ rr;
//	cout << "Nr i puntoreve me page mbi 700euro eshte:" <<setw(5)<< c << endl;
//	cout << "Rroga mesatare e puntoreve eshte:" << setw(5) << setprecision(2) << fixed << mes<<" euro\n";
//	cout << "Rroga maksimale eshte:" <<setw(5)<< max<<"EURO\n";
//
//}