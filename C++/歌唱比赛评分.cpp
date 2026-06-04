#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,a[10],in_n,maxn=-100,minn=100;
	double g=0;
    cin >> n;
    for (int i=0;i<n;i++)
    {
    	cin >> a[i];
	}
	for (int s=0;s<n;s++)
	{
		if (a[s]>maxn)
		{
			maxn=a[s];
		}
	}
	for (int t=0;t<n;t++)
	{
		if (a[t]<minn)
		{
			minn=a[t];
		}
	}
	for (int k=0;k<n;k++)
	{
		g += a[k]; 
	}
	g-=maxn;
	g-=minn;
	cout << fixed << setprecision(2) <<double(g/(n-2));
	return 0;	
} 
