#include<iostream>
using namespace std;
int main()
{
	double a,b,c;
	cin >>a>>b>>c;
	int d;
	d=0;
	if (a+b>c)
	{
		d+=1;
	}
	if (a+c>b)
	{
		d+=1;
	}
	if (c+b>a)
	{
		d+=1;
	}
	if (a-b<c)
	{
		d+=1;
	}
	if (a-c<b)
	{
		d+=1;
	}
	if (c-b<a)
	{
		d+=1;
	}
	switch(d)
	{
		case(6):
			cout << "yes";
			break;
		default:
			cout <<"no";
			break;
	}
	return 0;	
} 
