#include<iostream>
#include<cstring>
using namespace std;
char a[81]; 
int main()
{
	cin >> a;
	for (int i = 0;i < strlen(a);i++)
	{
		if(a[i] >=65 && a[i] <= 90)
		{
			a[i] += 32;
		}
		else if (a[i] >=97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
	}
	for (int i = 0;i < strlen(a);i++)
	{
		cout << a[i];
	}
	return 0;
}
