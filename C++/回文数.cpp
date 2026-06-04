#include<iostream>
using namespace std;
int main()
{
	int n,x=0;
	cin >>n;
	while (1)
	{
		int o = n;
		int r = 0;
		while(n>0)
		{	
			r=r*10+n%10;
			n=n/10;	
		}
		if (r==o)
		{
			break;
		}
		n=o+r;
		x+=1;
	}
	cout << x;
}
