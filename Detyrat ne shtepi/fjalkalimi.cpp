//#include<iostream>
//#include<string>
//using namespace std;
//char numrat[] = {'0','1','2','3','4','5'};
////char simbolet[] = { '^','*','!','#','@','%' };
//string gjenero_fjalkalim(string fjalia)
//{
//	string rez = "";
//
//	rez +=fjalia.at(0);
//	for (int i = 1; i < fjalia.size(); i++)
//	{
//		if (fjalia.at(i)==' ')
//		{
//			rez += fjalia.at(i + 1);
//		}
//	}
//	return rez;
//}
//string gjenero_fjalkalim(string fjalia,char nr,char simb)
//{
//	string rez = "";
//	rez += nr;
//	
//	rez += fjalia.at(0);
//	for (int i = 1; i < fjalia.size(); i++)
//	{
//		if (fjalia.at(i) == ' ')
//		{
//			rez += fjalia.at(i + 1);
//		}
//	}
//	rez += simb;
//	return rez;
//}
//void fjalkalimivalid(string f)
//{
//	//Kushti per numra
//	int k = 0;
//	for (size_t i = 0; i < f.size(); i++)
//	{
//		for (size_t j = 0; j <=5; j++)
//		{
//			if (f.at(i) == numrat[j])
//			{
//				k = -1;
//				break;
//			}
//		}
//		if (k == -1)
//			break;
//	}
//	if (k == 0)
//	{
//		cout << "Fjalkalimi nuk eshte valid, pasi nuk ka numra!\n";
//	}
//	else
//		cout << "Fajlkalimi '" << f << "' eshte valid!\n";
//}
//void main() 
//{	
//	string fjalia;
//	cout << "Jepni nje fjali: ";
//	getline(cin, fjalia);
//	cout << fjalia << endl;
//	cout << "Fjalkalimi1 eshte: " 
//		<< gjenero_fjalkalim(fjalia) << endl;
//	cout << "Fjalkalimi2 eshte: "
//		<< gjenero_fjalkalim(fjalia,'s','*') << endl;
//	fjalkalimivalid(fjalia);
//}