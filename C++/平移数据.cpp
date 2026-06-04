#include<iostream>
using namespace std;
int main()
{
	int n,d,i;
	cin >> n;
	int s[n];
	for (int ii=0;ii<n;ii++)
	{
		cin >> s[ii];
	}
	d=s[0];
	int ss[n-1];
	for (i=0;i<n-1;i++)
	{
		ss[i]=s[i+1];
	}
	ss[n-1]=d;
	for (int j=0;j<n;j++)
	{
		cout << ss[j]<<' ';
	}
	return 0;
}
