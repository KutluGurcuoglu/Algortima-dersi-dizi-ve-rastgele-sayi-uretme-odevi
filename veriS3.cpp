#include <iostream>
#include<stdlib.h>
#include<ctime>

using namespace std;

int main()
{
	srand(time(0));
	
	//Versyon 2
	
	int tsayilar[500];
	int toplam,ort;

	for(int i = 0;i<500;i++)
	{
		tsayilar[i] = rand()%(35-10+1)+10;
		toplam = toplam + tsayilar[i];
		ort = toplam / (i+1);
		if(ort >=20 && ort <=30)
		{
			i--;
		}
	}
	cout<<"Ortalama: "<<toplam/500<<endl;
		
	//Versyon 1	
	bool ortaralik = false;
	
	while(ortaralik != true)
	{
		int tsayilar[500];
		int toplam;
		int ort;
		for(int i = 0;i<500;i++)
		{
			tsayilar[i] = rand()%(35-10+1)+10;
			toplam = toplam + tsayilar[i];
		}
		ort = toplam/500;
		if(ort >=20 && ort <=30)
		{
			cout<<"Ortalama: "<<ort;
			ortaralik = true;
		}
		else
		{
			cout<<"Ortalama 20-30 araligi disinda tekrar deneniyor osrtalama:"<<ort<<endl;
		}
	}
}

