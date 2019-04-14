//#include<iostream>
//#include<string>
//#include<iomanip>
//using namespace std;
//const int m = 3, n = 7;
//struct Temperatura
//{
//	char njesia;
//	int min,max;
//	string stina;
//	int T[m][n];
//	void leximi() {
//		cout << "Cakto njesine: ";
//		cin >> njesia;
//		cout << "Sa eshte temp min dhe max: ";
//		cin >> min >> max;
//		cout << "Cakto stinen: ";
//		cin >> stina;
//		for (size_t i = 0; i < m; i++)
//		{
//			for (size_t j = 0; j< n; j++)
//			{
//				cout << "Sa eshte temperatura per qytetin "
//					<< i + 1 << " ne diten " << j + 1 << " :";
//				cin >> T[i][j];
//			}
//		}
//
//	}
//	double mes()
//	{
//		int s = 0;
//		for (size_t i = 0; i < m; i++)
//		{
//			for (size_t j = 0; j < n; j++)
//			{
//				s = s + T[i][j];
//			}
//		}
//		return (double)s / (n*m);
//	}
//	int numro()
//	{
//		int k = 0;
//		for (size_t i = 0; i < m; i++)
//		{
//			for (size_t j = 0; j < n; j++)
//			{
//				if (T[i][j]==min)
//				{
//					k++;
//				}
//			}
//		}
//		return k;
//
//	}
//	void shtypja()
//	{
//		cout << "TEMPERATURAT:\n\n";
//
//		for (size_t i = 0; i < m; i++)
//		{
//			for (size_t j = 0; j < n; j++)
//			{
//				cout << setw(5) << T[i][j];
//			}
//			cout << endl;
//		}
//	}
//	void shtypja(char ndarja)
//	{
//		cout << stina[0] << ndarja << stina[stina.size() - 1];
//	}
//};
//void main()
//{
//	Temperatura temp;
//	temp.leximi();
//	cout << "Temperatura mesatare: " << temp.mes() << endl;
//	cout << "Numri i temp minimale: " << temp.numro() << endl;
//	temp.shtypja();
//	temp.shtypja('^');
//}