#include<iostream>
using namespace std;
int main()
{
	int i=0;
	int a[101];
	while(cin >> a[i]){
		i++;
	}
	for (int j=i-1;j>=0;j--)
	{
		cout << a[j]<<' '; 
	}
	return 0;
} 
