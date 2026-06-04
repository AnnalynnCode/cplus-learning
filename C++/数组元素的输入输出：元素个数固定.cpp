#include<iostream>
using namespace std;
int a[10]; 
int main()
{
	for (int i=0;i<10;i++)
	{
		cin >> a[i];
	}
	for (int j=0;j<10;j++)
	{
		cout << a[j] << ' ';
	}
	return 0;
} 
