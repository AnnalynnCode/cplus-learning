#include<iostream>
using namespace std;
int main()
{
	int a,d=0,x=100000,z;
	cin >> a;
	for(int sum,i=1;i<=a;i+=1)
	{
		cin>>sum;
		if (sum>d)
		{
			d=sum;
		}
		if (sum<x)
		{
			x=sum;
		}
	}
	z=d-x;
	cout << z;
	return 0;
}
