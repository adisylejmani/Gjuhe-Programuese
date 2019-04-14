//#include<iostream>
//#include<string>
//using namespace std;
//const int n = 5;
//enum drejtimi
//{
//	kompjuterika=1,telekomi,elektroenergjetika,
//	automatika,elektronika
//};
//struct studenti
//{
//	int ID;
//	string emri,mbiemri;
//	drejtimi dega;
//	int nota[n];
//	void leximi()
//	{
//		cout << "Jepni ID: ";
//		cin >> ID;
//		cout << "Jepni emrin: ";
//		cin >> emri;
//		cout << "Jepni mbiemrin: ";
//		cin >> mbiemri;
//		cout<<"Drejtimi:\n(kompjuterika=1,telekomi=2,elektroenergjetika=3,automatika=4, elektronika=5)";
//		int d;
//		cin >> d;
//		dega = static_cast<drejtimi>(d);
//		cout << "Jepni notat: \n";
//		for (size_t i = 0; i < n; i++)
//		{
//			cout << "jepni noten e " << i + 1 << ": ";
//			cin >> nota[i];
//		}
//
//	}
//	int provimet_e_dhena()
//	{
//		int l = 0;
//		for (size_t i = 0; i < n; i++)
//		{
//			if (nota[i]>5)
//			{
//				l++;
//			}
//		}
//		return l;
//	}
//	double mes()
//	{
//		int s=0;
//		for (size_t i = 0; i < n; i++)
//		{
//			if (nota[i] > 5)
//			{
//				s = s + nota[i];
//			}
//		}
//		return (double)s / provimet_e_dhena();
//	}
//
//};
//void main()
//{
//	studenti s;
//	s.leximi();
//	cout << "NR i provimeve te dhena: " << s.provimet_e_dhena() << endl;
//	cout << "Mesatarja e notave: " << s.mes() << endl;
//
//
//}