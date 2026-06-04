#include<iostream>
using namespace std; 
int main()
{
	int s,a[10000],maxn=0,max;
	cin >> s;
	for (int i=0;i<s;i++)
	{
		cin >> a[i];
	}
	for (int j=0;j<s;j++)
	{
		if (a[j]>maxn)
		{
			maxn=a[j];
			max=j+1;
		}
	}
	cout << max <<' '<< maxn;
	return 0;
}
