//#include<iostream>
//#include<string>
//#include<limits>
//using namespace std;
//const int n = 5;
//struct qyteti
//{
//	int kodi;
//	string emri;
//	int temp[n];
//	void leximi()
//	{
//		cout << "Jepni kodin e qytetit: ";
//		cin >> kodi;
//		cout << "jepni emrin e qytetit: ";
//		cin >> emri;
//		for (size_t i = 0; i < n; i++)
//		{
//			cout << "Caktoni temperaturen " << i + 1 << ": ";
//			cin >> temp[i];
//		}
//	}
//	double mesatrja()
//	{
//		int s = 0;
//		for (size_t i = 0; i < n; i++)
//		{
//			s = s + temp[i];
//		}
//		return (double)s / n;
//	}
//	int sa_dite_mbi_20_grad()
//	{
//		int p = 0;
//		for (size_t i = 0; i < n; i++)
//		{
//			if (temp[i]>20)
//			{
//				p++;
//			}
//		}
//		return p;
//	}
//	int temp_max()
//	{
//		int max = INT16_MIN;
//		for (size_t i = 0; i < n; i++)
//		{
//			if (temp[i]>max)
//			{
//				max = temp[i];
//			}
//		}
//		return max;
//	}
//
//};
//void main()
//{
//	qyteti q;
//	q.leximi();
//	cout << "mesatrja: " << q.mesatrja()<<endl;
//	cout<<"mbi 20: "<<q.sa_dite_mbi_20_grad() << endl;
//	cout << "temp max: " << q.temp_max() << endl;
//}