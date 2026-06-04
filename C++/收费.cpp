#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a,b;
	cin >> a;
	if (a<=20)
	{
		b=a*1.68;
		cout <<fixed<<setprecision(2)<<b;
	}
	else if(a>20)
	{
		b=a*1.98;
		cout <<fixed<<setprecision(2)<<b;
	}
	return 0;
}
