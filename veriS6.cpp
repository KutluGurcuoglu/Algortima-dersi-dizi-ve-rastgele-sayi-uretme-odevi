#include <iostream>
#include<stdlib.h>
#include<ctime>

using namespace std;


int main()
{
	srand(time(0));
	
    float fsayilar[500];  
	srand(time(0)); 
	for (int i = 0; i < 500; i++) 
	{
	   fsayilar[i] = (float)(rand() % (1,0-0,0+1,0)+0,0 ) + (float)rand() / (float)RAND_MAX;
	   cout<<fsayilar[i]<<endl;
    }

}

