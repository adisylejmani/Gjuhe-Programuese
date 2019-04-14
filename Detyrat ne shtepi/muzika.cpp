//#include<iostream>
//#include<string>
//using namespace std;
//const int n = 3;
//string s[] = { "pop" ,"rock","rap","popullore","jazz","klasike" };
//enum muzika
//{
//	pop=1,rock,rap,popullore,jazz,klasike
//};
//struct koncert
//{
//	muzika M[n];
//	int nr_kengtar;
//	bool falas;
//	string qyteti;
//	void lexo()
//	{
//		cout << "Jep nr kengtareve: ";
//		cin >> nr_kengtar;
//		for (size_t i = 0; i < n; i++)
//		{
//			int muz;
//			cout << "Cakto muziken " << i + 1;
//			cout << " (pop=1,rock=2,rap=3,popullore=4,jazz=5,klasike=6):";
//			cin >>muz ;
//			M[i] = static_cast<muzika>(muz);
//
//		}
//
//	}
//	void shtyp()
//	{
//		for (size_t i = 0; i < n; i++)
//		{
//			cout << s[M[static_cast<muzika>(i)]-1];
//			cout << endl;
//		}
//	}
//	bool ithjesht()
//	{
//		bool b=true;
//		for (size_t i = 2; i < nr_kengtar/2; i++)
//		{
//			if (nr_kengtar%i==0)
//			{
//				b = false;
//				break;
//			}
//		}
//		return b;
//	}
//};
//void main()
//{
//	koncert ko;
//	ko.lexo();
//	ko.shtyp();
//	cout << "Nr i kengtarve eshe nje numer i thjeshte: ";
//	if (ko.ithjesht())
//	{
//		cout << "Po!";
//	} 
//	else
//	{
//		cout << "Jo!";
//	}
//	cout<< endl;
//}