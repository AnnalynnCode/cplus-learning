#include<iostream>
#include<iomanip>
using namespace std;      
int main()
{
	int n;
	double x,g=1,t=1;
	cin >> x>>n;
	for (int i=1;i<=n;i+=1)
	{
		t*=x;
		g+=t;
	}
	cout <<fixed<<setprecision(2)<< g;
}
