#include<iostream>
#include<string>
using namespace std;
const int n = 5;
const char vijat[] = "--------------------\n";
string F[] = { "ChampionsL","PremierL","FAcup","EFLcup" };
enum liga
{
	ChampionsL,PremierL,FAcup,EFLcup 
};
struct ekipi
{
	string klubi; liga l; int piket; int fitoret; int golat[n];
};
double mesatarja(int golat[])
{
	int s = 0;
	for (size_t i = 0; i < n; i++)
	{
		s = s + golat[i];
	}
	return (double)s / n;
}
void shfaq(ekipi e)
{
	cout << "Klubi: " << e.klubi << endl;
	cout << "Liga: " << F[e.l] << endl;
	cout << "Piket: " << e.piket << endl;
	cout << "Fitoret: " << e.fitoret << endl;
	cout << "Golat per ndeshje:\n";
	for (size_t i = 0; i < n; i++)
	{
		cout << "Ndeshja " << i + 1 << ": " << e.golat[i]<<endl;
	}
	cout << "Mesatarja e golave te " << e.klubi << " eshte: " << mesatarja(e.golat) << endl;
}
ekipi maxfitore(ekipi e1,ekipi e2)
{
	if (e1.fitoret>e2.fitoret)
	{
		return e1;
	}
	else
	{
		return e2;
	}
}
void main()
{
	ekipi e1 = { "Liverpool",PremierL,54,17,{1,0,4,3,2} };
	ekipi e2 = { "Manchester City",PremierL,50,16,{2,3,6,0,1} };
	cout << vijat;
	shfaq(e1);
	cout << vijat;
	shfaq(e2);
	cout << vijat;
	ekipi mf = maxfitore(e1, e2);
	cout << "Ekipi me me shume fitore eshte: " << mf.klubi << endl;
	cout << vijat;
}