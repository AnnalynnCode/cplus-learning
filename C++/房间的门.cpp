#include<iostream>
using namespace std;
bool a[1001];
int main()
{
	int num;
	cin >> num;
	for (int i = 1;i <= num;i++)
	{
		for (int j = 1;j <= num;j++)
		{
			if (j % i == 0)
			{
				a[j] = !a[j];
			}	
		} 
	}
	for (int k = 1;k <= num;k++)
	{
		if (a[k] == 1)
		{
			cout << k << " ";
		}
	}
	return 0;
}
