#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[11];
	cin >> a;
	memset(a,'a',11);
	for (int i = 0;i < 11;i++)
	{
		cout << a[i] << ',';
	}
	return 0;
} 
