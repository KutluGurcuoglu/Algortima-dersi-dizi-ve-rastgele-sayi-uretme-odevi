#include <iostream>
#include<stdlib.h>
#include<ctime>

using namespace std;

int main()
{
	srand(time(0));
	
	int tsayilar[500];
	for(int i = 0;i<500;i++)
	{
		tsayilar[i] = rand()%(35-25+1)+25;
		cout<<tsayilar[i]<<endl;
	}
}

