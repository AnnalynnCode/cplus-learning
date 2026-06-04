#include<iostream>
using namespace std;
int main()
{
	int n,a,b;
	cin >> n;
	a=0;
	b=0;
	for(int i=1;i<=n;i+=2)
	{
		a+=i;
	}
	for(int i=2;i<=n;i+=2)
	{
		b+=i;
	}
	cout<<b<<' '<<a;
	return 0;
}
