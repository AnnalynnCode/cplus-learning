#include<iostream>
using namespace std;
int main()
{
	double a,d=0,x=999999,p,num,sum;
	cin >>a;
	for(int i=0;i<a;i+=1)
	{
		cin >>num;
		if(num>d)
		{
			d=num;
		} 
		if(num<x)
		{
			x=num;
		}
		sum+=num;
	}
	p=sum/a;
	cout<<x<<' '<<d<<' '<<p;
	return 0;
}
