#include<iostream>
using namespace std;
int main()
{
    int a=0,s=0;
	do
	{
	    a+=1; 
		if (a%2 == 1 && a%3 == 1 && a%4 == 1 && a%5 == 1 && a%6 == 1 && a%7 == 0)
		{
			s=1;
		}
		else
		{
		    s=0;	
		}   	
	}while(s==0);
	cout <<a;
	return 0;
} 
