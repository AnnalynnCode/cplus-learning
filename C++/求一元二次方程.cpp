#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,d;
	cin >>a>>b>>c;
	double x1,x2;
	d=sqrt(pow(b,2)-(4*a*c));
	x1=(-b+d)/(2*a);
	x2=(-b-d)/(2*a);
	if(x1==x2)
	{
		cout <<"x1=x2="<<fixed<<setprecision(5)<<x2;
	}
	else if(x1!=x2)
	{
		if (x1<x2)
		{
			cout <<"x1="<<fixed<<setprecision(5)<<x1<<';'<<"x2="<<fixed<<setprecision(5)<<x2;
		}
		else if(x2<x1)
		{
			cout <<"x2="<<fixed<<setprecision(5)<<x2<<';'<<"x1="<<fixed<<setprecision(5)<<x1;
		}
	}
	else
	{
		cout <<"No answer!";
	} 
	return 0;
}
