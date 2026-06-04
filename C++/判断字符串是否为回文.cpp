#include<iostream>
#include<cstring>
using namespace std;
char a[101];
int main()
{
	cin >> a;
	int l = strlen(a)-1,f = 1;
	bool b = 1;
	for (int i = 0;i <= strlen(a)/2;i++)
	{
		if (a[i] != a[l])
		{
			f = 0;
			cout << "no";
			return 0;
		}
		l--;
	}
	if (f)
	{
		cout << "yes";
	}
	return 0;
}
