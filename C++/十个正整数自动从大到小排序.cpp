#include<iostream>
using namespace std;
int main()
{
	int a[10],m;
	for (int i=0;i<10;i++)
	{
		cin >> a[i];
	}
	for (int j=0;j<9;j++)
	{
		for (int k=0;k<9-j;k++) 
		{
			if (a[k]<a[k+1])
			{
				m=a[k];
				a[k]=a[k+1];
				a[k+1]=m;
			} 
		}
	}
	for (int y=0;y<10;y++)
	{
		cout << a[y]<<' ';
	}
	return 0;
}
