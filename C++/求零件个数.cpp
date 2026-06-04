#include<iostream>
using namespace std;
int main()
{
	int s;
	for (s=100;s<=199;s+=1)
	{
		if (s%3==2 && s%5==3 && s%7==5)
		{
			cout << s;
			break;	
		}	
	}	
	return 0;
} 
