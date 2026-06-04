#include<iostream>
using namespace std;


int main()
{
	bool a[1000]={0};
	int n;
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if (j%i==0)
			{
				a[j]=!a[j];
			}
		}
		
	}
	for (int i=1;i<=n;i++)
	{
		if (a[i]==1)
		{
			cout << i << " ";
		}
	}
	return 0;
}
