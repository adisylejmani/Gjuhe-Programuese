//#include<iostream>
//#include<string>
//using namespace std;
//string L[] = { "dota2", "witcher3", "paladins", "csgo","lol","fortnite" };
//enum game 
//{
//	dota2=5, witcher3, paladins, csgo,lol,fortnite
//
//};
//int gametplot3(game l)
//{		
//	int c = 0;
//	for (game l = dota2; l <= fortnite; l = static_cast<game>(l + 1))
//	{
//		if (l%3==0)
//		{
//			c++;
//		}
//	}
//	return c;
//}
//int shumaegameve(game l)
//{
//	int S = 0;
//	for (game l = dota2; l <= fortnite; l = static_cast<game>(l + 1))
//	{
//		if (L[l-5].at(0)=='c'|| L[l - 5].at(0) == 'd')
//		{
//			S = S + l;
//				
//		}
//	}
//	return S;
//}
//int prodhimigameve(game l)
//{
//	int P = 1;
//	for (game l = dota2; l <= fortnite; l = static_cast<game>(l + 1))
//	{
//		if (L[l - 5].size()>5 )
//		{
//			P =P* l;
//
//		}
//	}
//	return P;
//}
//void main()
//{
//	for (game  l = dota2; l <= fortnite; l=static_cast<game>(l+1))
//	{
//		cout << "Emri i lojes: "<< L[l-5]<<" nr i lojes: "<< l << endl;
//	}
//	game l=dota2;
//	cout << "Nr i gameve te plopjestueshem me 3: "
//		<< gametplot3(l) << endl;
//	cout << "Shuma gameve qe fillojne me c dhe d: " << shumaegameve(l) << endl;
//	cout << "Prodhimi i nr me shkronja me te medhenjs se 5: " << prodhimigameve(l) << endl;
//}