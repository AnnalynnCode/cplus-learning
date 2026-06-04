#include<iostream>
using namespace std;
int a[10];
int main()
{
	for (int i=0;i<10;i++)
	{
		cin >> a[i];	
	}	
	for (int j=9;j>=0;j--)
	{
		cout << a[j] << ' ';
	}
	return 0;
} 
