#include<iostream>
using namespace std;
int main()
{
	double a[10],b[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65},f;
	for (int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for (int j=0;j<10;j++)
	{
		f+=a[j]*b[j];
	}
	cout<<f;
	return 0;
}
