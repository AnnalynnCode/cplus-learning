#include<iostream>
using namespace std;
int main()
{
	int a,b;
	a=0;
	b=0;
	for(int i=1;i<=100;i+=1)
	{
		if (i%2==0)
		{
			b+=i;
		}
		else if(i%2!=0)
		{
			a+=i; 
		}
	}
	cout <<b<<' '<<a;
	return 0;
}
