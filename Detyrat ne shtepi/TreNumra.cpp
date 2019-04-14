//#include <iostream>
//using namespace std;
//struct tre_numra
//{
//	short int a, b, c;//p.sh. a=6, b=10, c=5
//	void Lexo() {
//		cout<<"Cakto a, b dhe c: ";
//		cin >> a >> b >> c;
//	}
//	int Max() {
//		int rez = a;
//		if (b > rez)
//			rez = b;
//		if (c > rez)
//			rez = c;
//		return rez;
//	}
//	int Min() {
//		int rez = a;
//		if (b < rez)
//			rez = b;
//		if (c < rez)
//			rez = c;
//		return rez;
//	}
//	double Mes() {
//		return (double)(a + b + c) / 3;
//	}
//	int Mediana() {
//		int rez;
//		if ((a > b&&a < c) || (a > c&&a < b))
//			rez = a;
//		else if ((b > a&&b < c) || (b > c&&b < a))
//			rez = b;
//		else
//			rez = c;
//		return rez;
//	}
//	void Shtyp() {
//		int min = Min();
//		int max = Max();
//		int med = Mediana();
//		cout << "Rangu i numrave: ";
//		for (size_t i = min; i <= max; i++)
//		{
//			if (i == med)
//				continue;
//			else
//				cout << i << " ";
//		}
//	}
//	bool TeBarabarte() {
//		return ((a == b)&&(a==c)&& (b == c));
//	}
//};
//void main() {
//	tre_numra tn;
//	tn.Lexo();
//	cout << "Max: " << tn.Max() << endl;
//	cout << "Min: " << tn.Min() << endl;
//	cout << "Mediana: " << tn.Mediana() << endl;
//	cout << "Mes: " << tn.Mes() << endl;
//	cout << "Te barabarte: " << tn.TeBarabarte() << endl;
//	tn.Shtyp();
//}