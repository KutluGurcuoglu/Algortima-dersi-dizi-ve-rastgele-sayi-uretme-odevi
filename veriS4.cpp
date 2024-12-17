#include <iostream>
#include<stdlib.h>
#include<ctime>

using namespace std;

int main()
{
	srand(time(0));
	
	int toplam = 0,ort,eb,ek = 100,ta = 0,ca = 0,orta = 0,ortao = 0;
	
	int tsayilar[10];
	for(int i = 0;i<10;i++)
	{
		tsayilar[i] = rand()%(100-0+1)+0;
		if(tsayilar[i]>eb)
		{
			eb = tsayilar[i];
		}
		if(tsayilar[i]<ek)
		{
			ek = tsayilar[i];
		}
		if(tsayilar[i]%2 == 0)
		{
			ca++;
		}
		else
		{
			ta++;
		}
		toplam = toplam + tsayilar[i];
		cout<<tsayilar[i]<<endl;
	}
	ort = toplam/10;
	cout<<"Ortalama: "<<ort<<"\tEn buyuk sayi: "<<eb<<"\tEn kucuk sayi: "<<ek<<endl;
	
	cout<<"\nSayilarin frekansi: ";
	for(int i = 0;i<10;i++)
	{
		int adet = 0;
		for(int j = 0;j<10;j++)
		{
			if(tsayilar[i] == tsayilar[j])
			{
				adet++;
			}
		}
		cout<<"\n\t"<<tsayilar[i]<<" frekansi: "<<adet;	
	}
	
	int teks[ta],cifts[ca];
	cout<<"\nTek sayilar: ";
	for(int i = 0;i<10;i++)
	{
		int j = 0;
		if(tsayilar[i]%2 != 0)
		{
			teks[j] = tsayilar[i];
			cout<<"\n\t"<<teks[j];
			j++;
		}
		if(tsayilar[i]<ort)
		{
			orta++;
		}
		else
		{
			ortao++;
		}		
	}
	int ortalti[orta],ortaltio[ortao];
	
	cout<<"\nCift sayilar: ";
	for(int i = 0;i<10;i++)
	{
		int j = 0;
		if(tsayilar[i]%2 == 0)
		{
			cifts[j] = tsayilar[i];
			cout<<"\n\t"<<cifts[j];
			j++;
		}
	}
	
	cout<<"\nOrtalama alti sayilar: ";
	for(int i = 0;i<10;i++)
	{
		int j = 0;
		if(tsayilar[i]<ort)
		{
			ortalti[j] = tsayilar[i];
			cout<<"\n\t"<<ortalti[j];
			j++;
		}
	}
	
	cout<<"\nOrtalama alti olmayan sayilar: ";
	for(int i = 0;i<10;i++)
	{
		int j = 0;
		if(tsayilar[i]>=ort)
		{
			ortaltio[j] = tsayilar[i];
			cout<<"\n\t"<<ortaltio[j];
			j++;
		}
	}
}
