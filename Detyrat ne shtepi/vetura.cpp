//#include<iostream>
//#include<string>
//#include<limits>
//using namespace std;
//const int n = 5;
//const char vijat[] = "--------------------\n";
//string M[] = { "VW","BMW","Toyota","MercedesBenz" };
//enum marka
//{
//	VW,BMW,Toyota,MercedesBenz
//};
//struct vetura
//{
//	marka lloji; int viti; string ngjyra; int Udhtetimet[n];
//};
//
//int gjatesiamax(int Udhetimet[])
//{		
//	int max = INT16_MIN,imax;
//	for (size_t i = 0; i < n; i++)
//	{
//		if (Udhetimet[i]>max)
//		{
//			max = Udhetimet[i];
//			imax = i;
//		}
//	}
//	return imax;
//}
//void shfaq(vetura v)
//{	
//	cout << "Marka: " << M[v.lloji] << endl;
//	cout << "Viti i prodhimit: " << v.viti << endl;
//	cout << "Distanca e udhetimeve:\n";
//	for (size_t i = 0; i < n; i++)
//	{
//		cout << "udhetimi " << i + 1 << ": "<<v.Udhtetimet[i]<<endl;
//	}
//	int imax = gjatesiamax(v.Udhtetimet);
//	cout << "Udhetimi me i gjate eshte udhtimi " << imax + 1
//		<< " i cili ka zgjatur " << v.Udhtetimet[imax] << endl;
//}
//vetura meere(vetura v1,vetura v2)
//{		
//	if (v1.viti > v2.viti)
//	{
//		return v1;
//	}
//	else
//		return v2;
//}
//void main()
//{
//	vetura v1 = { MercedesBenz ,2018,"bardhe",{58,40,500,10,5} };
//	vetura v2 = { BMW,2009,"zeze",{36,92,350,200,50} };
//	cout << vijat;
//	shfaq(v1);
//	cout << vijat;
//	shfaq(v2);
//	cout << vijat;
//	vetura vr = meere(v1, v2);
//	cout << "Vetura me e re: " << M[vr.lloji] << endl;
//
//}