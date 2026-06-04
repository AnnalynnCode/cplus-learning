#include<iostream>
using namespace std;
int a[10];
int main()
{
	int temp,num;
	cin >> num;
	for (int i=0;i<num;i++)
	{
		cin >> a[i];
	}
	temp=a[0];
	for (int j=0;j<num-1;j++)
	{
		a[j]=a[j+1];
	}
	a[num-1]=temp;
	for (int k=0;k<num;k++)
	{
		cout << a[k]<<' ';
	}
	return 0;
}
