#include<iostream>
using namespace std;
int main()
{
	int s,a[10],temp;
	cin >> s;
	for (int i=0;i<s;i++)
	{
		cin >> a[i];
	}
	temp=a[0];
	for (int j=0;j<s-1;j++)
	{
		a[j]=a[j+1];
	}
	a[s-1]=temp;
	for (int k=0;k<s;k++)
	{
		cout << a[k] << ' ';
	}
	return 0;
}
 
