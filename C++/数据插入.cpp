#include<iostream>
using namespace std;
int main()
{
	int n,p,x,a[100];
	cin >> n >> p >> x;
	for (int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for (int i=n-1;i>=p-1;i--)
	{
		a[i+1]=a[i];
	}
	a[p-1]=x;
	for (int i=0;i<=n;i++)
	{
		cout << a[i]<<' ';
	}
	return 0;
}
