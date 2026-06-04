#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	do 
	{
		cin >>num;
		if (num>0)
		{
		    sum+=1;	
		}
	}while(num!=0);
	cout << sum;
	return 0;
}


