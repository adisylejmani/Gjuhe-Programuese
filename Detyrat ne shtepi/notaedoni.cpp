//#include<iostream>
//#include<limits>
//#include<iomanip>
//using namespace std;
//void main() {
//	const int b = 5;
//	int N[b];
//	int i = 0,S=0;
//	double mesatarja;
//	int c = 0;
//	int max = INT_MIN;
//	int min = INT_MAX;
//	cout << "Notat e marrura kete semester!\n";
//	do
//	{
//		cout << "Nota e " << i + 1 << " :";
//		cin >> N[i];
//		if (N[i]<5||N[i]>10)
//		{
//			cout << "Keni shtypur note te gabuar!Shtypni perseri!!\n";
//				continue;
//		}
//
//		S = S + N[i];
//		if (N[i]>max)
//		{
//			max = N[i];
//		}
//		if (N[i] < min)
//		{
//			min = N[i];
//		}
//		if (N[i]>6)
//		{
//			c++;//Progarmi qe po e perdorum :)
//		}
//		i++;
//	} while (i<b);
//	mesatarja = (double)S / b;
//	cout << "\nMesatarja e notave kete semester eshte: " << mesatarja << endl;
//	if (mesatarja >= 8)
//	{
//		cout << "Studenti eshte i dalluar!\n";
//	}
//	else
//	{
//		cout << "Studenti eshte mesatar!\n";
//	}
//	cout << "Nota minimale eshte: " << min << "\; Nota maksimale eshte: " << max << endl;
//	cout << "Numri i provimieve qe kam kaluar: " << c << endl;
//}