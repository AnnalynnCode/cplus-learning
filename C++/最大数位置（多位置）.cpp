#include<iostream>
using namespace std;
int main()
{
	int max=-100,n,a[10];
	cin >> n;
	for (int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for (int j=0;j<n;j++)
	{
		if (a[j]>max)
		{
			max=a[j]; 
		}
	}
	for (int y=0;y<n;y++)
	{
		if (a[y]==max)
		{
			cout << y+1<<endl;
		}
	}
	return 0;
}
