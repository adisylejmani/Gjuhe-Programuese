//#include<iostream>
//#include<string>
//#include<limits>
//using namespace std;
//const int y = 5;
//const char vijat[] = "--------------------\n";
//string P[] = { "Lenovo","HP","Asus","Macbook","Dell" };
//enum prodhuesi
//{
//	Lenovo,HP,Asus,Macbook,Dell
//};
//struct Llaptopi
//{
//	int nr_cpu; int GigaRam; prodhuesi pr; int D[y];
//};
//int shumaDisqeve(int D[])
//{
//	int s = 0;
//	for (size_t i = 0; i <y; i++)
//	{
//		s = s + D[i];
//	}
//	return s;
//}
//void shfaq(Llaptopi ll)
//{
//	cout << "Nr i CPU:" << ll.nr_cpu << endl;
//	cout << "Giga Ram: " << ll.GigaRam << endl;
//	cout << "Prodhuesi: " << P[ll.pr] << endl;
//	cout << "Memoria ne disqe:\n";
//	for (size_t i = 0; i < y; i++)
//	{
//		cout << "Disku " << i + 1 << ": " << ll.D[i] << endl;
//	}
//	cout << "Hapesira totale e llaptopit " << P[ll.pr]
//		<< " eshte " << shumaDisqeve(ll.D) << endl;
//}
//Llaptopi rammax(Llaptopi ll1,Llaptopi ll2)
//{
//	if (ll1.GigaRam>ll2.GigaRam)
//	{
//		return ll1;
//	}
//	else
//	{
//		return ll2;
//	}
//}
//void main()
//{
//	Llaptopi ll1 = { 4,8,Asus,{250,120,80,1000,500} };
//	Llaptopi ll2 = { 6,2,Dell,{120,320,480,100,50} };
//	cout << vijat;
//	shfaq(ll1);
//	cout << vijat;
//	shfaq(ll2);
//	cout << vijat;
//	Llaptopi rm = rammax(ll1, ll2);
//	cout << "LLaptopi me me shume ram eshte: " << P[rm.pr] << endl;
//}