//#include<iostream>
//#include<string>
//#include<limits>
//using namespace std;
//const int n = 5;
//string D[3] = {"prishtine","prizren","peje"};
//enum destinacioni
//{
//	prishtine,
//	prizren,
//	peje
//};
//struct linja
//{
//	float cmimi;
//	int uleset;
//	destinacioni dest;
//	int Oraret[n];
//};
//void shfaq(linja l)
//{
//	cout << "Shenimet per linjen \n";
//	cout << "cmimi i biletes: " << l.cmimi << endl;
//	cout << "destinacioni: " << D[l.dest] << endl;
//	cout << "Orari i linjave: \n";
//	for (size_t i = 0; i < n; i++)
//	{
//		cout << "ora: " << l.Oraret[i] << endl;
//	}
//	cout << endl;
//}
//destinacioni linjameshumulese(linja l1, linja l2)
//{
//	if (l1.uleset>l2.uleset)
//	{
//		return l1.dest;
//	}
//	else
//	{
//		return l2.dest;
//	}
//}
//
//int linjameehershme(linja l)
//{
//	int min = INT16_MAX,imin;
//	for (size_t i = 0; i < n; i++)
//	{
//		if (l.Oraret[i]<min)
//		{
//			min = l.Oraret[i];
//			imin = i;
//		}
//	}
//	return imin;
//}
//
//void main()
//{
//	linja l1 = { 1,50,prizren,{2,10,4,12,1} };
//	linja l2 = { 3,30,peje,{7,8,5,10,11} };
//	shfaq(l1);
//	shfaq(l2);
//	cout << "Linja me me shume ulse: " << D[linjameshumulese(l1,l2)] << endl;
//	cout << "orari me i hershem per " << D[l1.dest] << " eshte ne ora:" <<l1.Oraret[ linjameehershme(l1) ]<< endl;
//	cout << "orari me i hershem per " << D[l2.dest] << " eshte ne ora:" << l2.Oraret[linjameehershme(l2) ]<< endl;
//
//}
