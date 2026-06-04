#include<iostream>
using namespace std;
char a[8]; 
int main()
{
	int num;
	cin >> a;
	for (int i = 0;i < 8;i++)
	{
		if (a[i] == '1')
		{
			num += 1;
		}
	}
	cout << num;
	return 0;
}
