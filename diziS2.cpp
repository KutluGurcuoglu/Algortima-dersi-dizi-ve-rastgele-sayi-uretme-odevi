#include <iostream>

using namespace std;

int main()
{
	int A[3][3],B[3][3],C[3][3],sarrusA[5][3];
	
	cout<<"A Matrisini giriniz: \n";
	int gi = 1,gj = 1;
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			cout<<endl;
			cout<<"\tA["<<gi<<","<<gj<<"]: ";
			cin>>A[i][j];
			gj++;
		}
		
		gi++;
		gj = 1;
	}
	gi = 1,gj = 1;
	cout<<"\nB Matrisini giriniz: ";
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			cout<<endl;
			cout<<"\tB["<<gi<<","<<gj<<"]: ";
			cin>>B[i][j];
			gj++;
		}
		gi++;
		gj = 1;
	}
																    
	cout<<"\nA ve B matrisinin toplami : C= \n\t__\t\t\t      __";
	for(int i = 0;i<3;i++)
	{
		cout<<"\n\t| \t";
		for(int j = 0;j<3;j++)
		{
			C[i][j] = A[i][j] + B[i][j];
			cout<<C[i][j]<<"\t";
		}
		cout<<"|";
		
	}
	cout<<"\n\t|__\t\t\t      __";
	cout<<"\nA ve B matrisinin carpimi : C= \n\t__\t\t\t      __";
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			C[i][j] = 0;
		}
	}
	for(int i = 0;i<3;i++)
	{
		cout<<"\n\t| \t";
		for(int j = 0;j<3;j++)
		{
			for(int k = 0;k<3;k++)
			{
				C[i][j] = C[i][j] + (A[j][k]*B[i][k]);
			}
			cout<<C[i][j]<<"\t";
		}
		cout<<"|";

	}
	cout<<"\n\t|__\t\t\t      __";

	int sayac = 0;
	for(int i = 0;i<5;i++)
	{
		for(int j = 0;j<3;j++)
		{			
			if(i >= 3)
			{
				sarrusA[i][j] = A[sayac][j];
			}
			else
			{
				sarrusA[i][j] = A[i][j];
			}
		}
		if(i >= 3)
		{
			sayac++;
		}
	}	
	int s = 1,c = 1,arti = 0,eksi = 0,artij = 1;       //artib = 0,artii = 0,artiu = 0,eksi,eksib = 0,eksii = 0,eksiu = 0;
	//+ kýsým döngüsü
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			if(s<1)
			{
				arti = arti + sarrusA[i][j];
			}
			else
			{
				if(c == 1)
				{
					arti = arti + sarrusA[j][j];
				}
				else if(c == 2)
				{
					artij = j++;
					arti = arti + sarrusA[i][artij];
				}
				else if(c == 3)
				{
					int jikiarti = j+2;
					arti = arti + sarrusA[i][jikiarti];
				}
			}
			s++;
		}
		c++;
		s = 1;
	}
	//- kýsým döngüsü
	s = 1,c = 1;
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			if(c == 1)
			{
				if(s == 2)
				{
					eksi = eksi + sarrusA[j][j];
				}
				else if(s>2)
				{
					eksi = eksi + sarrusA[i][j] + sarrusA[j][i];
				}
				
			}
			else if(c == 2)
			{
				if(s == 1)
				{
					int ikii = i+2;
					eksi = eksi + sarrusA[ikii][j];
				}
				else
				{
					eksi = eksi + sarrusA[i][j] + sarrusA[j][i];
				}
			}
			else if(c == 3)
			{
				if(s == 1)
				{
					int ikii = i+2;
					eksi = eksi + sarrusA[ikii][j];
				}
				else if(s=2)
				{
					int ikii = i++;
					eksi = eksi + sarrusA[ikii][j];
				}
				else if(s == 3)
				{
					eksi = eksi + sarrusA[i][j];
				}
			}
			s++;
		}
		c++;
		s = 1;
	}
	eksi = eksi * -1;
	cout<<"\nA'nin determinanti = "<< arti + eksi;
}
