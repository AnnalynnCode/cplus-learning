#include<iostream>
using namespace std;
int main()
{
	int n=0,a[1000];
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	int max=a[1],max_i=1;
	for (int j=2;j<=n;j+=1)
	{
		if (a[j]>max)
		{
			max_i=j;
			max=a[j];
		}
	}
	cout << max_i;
} 
