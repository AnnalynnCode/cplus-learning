#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b;
	cin >> a>>b;
	double x,y;
	x=abs(a);
	y=abs(b);
	if(x<=1 && y<=1)
	{
		cout <<"yes";
	}	
	else
	{
		cout<<"no";
	}
	return 0;
}
