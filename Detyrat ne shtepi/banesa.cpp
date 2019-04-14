//#include<iostream>
//#include<string>
//using namespace std;
//const int n = 5;
//string M[] = { "ulpiana","dardani","vranjefc" };
//enum mahalla
//{
//
//	ulpian,dardani,vranjefc
//};
//struct banesa
//{
//	mahalla lagjja; int kati; double cmimi; int S_dhomave[n];
//};
//void vijat(char s,int x)
//{
//	for (size_t i = 0; i < x; i++)
//	{
//		cout << s;
//	}
//	cout << endl;
//}
//int siperfaqja_dhomave(banesa b)
//{
//	int s = 0;
//	for (size_t i = 0; i < n; i++)
//	{
//		s = s + b.S_dhomave[i];
//	}
//	return s;
//}
//void shfaq(banesa b)
//{
//	cout << "mahalla: " << M[b.lagjja] << endl;
//	cout << "kati: " << b.kati << endl;
//	cout << "cmimi i banese eshte: " << b.cmimi << "euro" << endl;
//	cout << "siperfaqja e dhomave \n";
//	for (size_t i = 0; i < n; i++)
//	{
//		cout << "dhoma " << i + 1 << ": " << b.S_dhomave[i]<<endl;
//
//	}
//	cout << "siperfaqja e baneses: " << siperfaqja_dhomave(b) << endl;
//}
//banesa meeshtrejt(banesa b1,banesa b2)
//{
//	if (b1.cmimi>b2.cmimi)
//	{
//		return b1;
//	}
//	else
//	{
//		return b2;
//	}
//}
//void main()
//{
//	banesa b1 = { ulpian,2,140000,{25,10,30,45,5} };
//	banesa b2 = { vranjefc,1,160000,{50,20,10,45,20} };
//	shfaq(b1);
//	vijat('-',5);
//	shfaq(b2);
//	vijat('-',5);
//	banesa bsh = meeshtrejt(b1, b2);
//	cout << "banesa me e shtrejte eshte ne lagjen: " << M[bsh.lagjja] << endl;
//
//}