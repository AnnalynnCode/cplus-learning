#include<iostream>
using namespace std;
int a[101];
int main()
{
	int b;
	cin >> b;
	for (int i=0;i<b;i++)
	{
		cin >> a[i];
	}
	for (int j=b-1,k=1;j>=0;j--,k++)
	{
		if (k%2!=0)
		{
			cout << a[j] << ' ';
		}
	}
	return 0;
} 
