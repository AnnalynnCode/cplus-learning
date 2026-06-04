#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int max=0;
	cin >>a>>b>>c;
	int min=a;
	if (a>b && a>c)
	{
	    max=a;	
	}
	else if(b>a && b>c)
	{
		max=b;
	}
	else
	{
		max=c;
	}
	if (a<b && a<c)
	{
	    min=a;	
	}
	else if(b<a && b<c)
	{
		min=b;
	}
	else
	{
		min=c;
	}
	cout << max <<' '<<min;	
}
