#include<iostream>
#include<cstring>
using namespace std;
char a[101];
int main()
{
	char n,m;
	cin >> a >> n >> m;
	for (int i = 0;i < strlen(a);i++)
	{
		if (a[i] == n)
		{
			a[i] = m;
		}
	}
	for (int i = 0;i < strlen(a);i++)
	{
		cout << a[i];
	}
	return 0;
}
