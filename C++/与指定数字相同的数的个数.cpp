#include<iostream>
using namespace std;
int main()
{
	int a[100],n,m,g=0;
	cin >> n;
	for (int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cin >> m;
	for (int j=0;j<n;j++)
	{
		if (a[j]==m)
		{
			g+=1;
		}
	}
	cout << g;
}
