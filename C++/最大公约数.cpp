#include<iostream>
using namespace std;
int main()
{
	int m,n,a=1,max=0,d;
	cin >>n>>m;
	if (n>m)
	{
		d=m;
	}
	else if(m>n)
	{
		d=n;
	}
	else
	{
		d=m;
	}
	while(a<=d)
	{
	    if (a>max && (n%a==0 && m%a==0))
		{
		    max=a;	
	    }
		a+=1;	
	}
	cout<<max;
	return 0;
}
