#include<iostream>
using namespace std;
int main()
{
	int m,a[10000],max,min;
	cin >> m;
	for (int i=0;i<m;i++)
	{
		cin >> a[i];
	}
	max=0;
	min=100000;
	for (int ax=0;ax<m;ax+=1)
	{
		if (a[ax]>max)
		{
			max=a[ax];
		}
	}
	for (int in_s=0;in_s<m;in_s+=1)
	{
		if (a[in_s]<min)
		{
			min=a[in_s];
		}
	}
	cout << max-min;
}
