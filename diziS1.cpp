#include <iostream>
#include<stdlib.h>
#include<ctime>
#include <conio.h>

using namespace std;


int main()
{
	srand(time(0));
	
	bool bit = false;
	
	int ciro[60],ortciro[5];
	int j = 0,ycirot = 0,yil = 0,araliki,araliks;
	for(int i = 0;i<60;i++)
	{
		ciro[i] = rand()%(5000-100+1)+100;
		cout<<endl<<" "<<ciro[i]<<endl;
		ycirot = ycirot + ciro[i];
		j++;
		if(j == 12)
		{
			ortciro[yil] = ycirot/12;
			ycirot = 0;
			j = 0;
			yil++;
			cout<<yil<<" Ortalama cirosu: "<<ortciro[0]<<endl;
		}
		
	}
	while(bit != true)
	{
		yilgir:
		
		cout<<"Yil giriniz(1-5): ";
		int gyil = (getche()-49);
		switch(gyil)
		{
			case 0:
				araliki = 0;
				araliks = 12;
				break;
			case 1:
				araliki = 12;
				araliks = 24;
				break;
			case 2:
				araliki = 24;
				araliks = 36;
				break;
			case 3:
				araliki = 36;
				araliks = 48;
				break;
			case 4: 
				araliki = 48;
				araliks = 60;
				break;
			default:
				cout<<"\tGecerli bir yil giriniz(1-5)\n";
				goto yilgir;
				break;
		}
		
		cout<<"\nYilinin ortalamsindan yuksek olan aylar ve ortalmalari: "<<gyil;
		for(int i = 0;i<60;i++)
			{
				if(ortciro[gyil]<ciro[i])
				{
					cout<<"\n\t"<<++i<<". Ayin cirosu: "<<ciro[i]<<"   "<<gyil;
				}
			}	
		
			cout<<endl<<(gyil+1)<<"Yilinin her ceyreginin ortalamalari: ";		
			j = 1;
			int ceyrek = 1,ceyrektop = 0;
			for(int i = araliki;i<araliks;i++)
			{
				ceyrektop = ceyrektop + ciro[i];
				j++;
				if(j == 4)
				{
					cout<<"\n\t"<<ceyrek<<"Ceyregin ortalamasi: "<<(ceyrektop/4);
					j = 1;
					ceyrektop = 0;
					ceyrek++;
				}
			}
		cout<<endl;
	
		secgir:
		cout<<"\nProgram sonlandirilsin mi (E/H)\n";
		char sec = getche();
		switch(sec)
		{
			case 'e':
				bit = true;
				break;
			case 'E':
				bit = true;
			case 'h':
				bit = false;
				break;
			case 'H':
				bit = false;
				break;
			default:
				cout<<"\tGecerli bir harf giriniz(E/H)\n";
				goto secgir;
				break;
			
		}
	}
}

