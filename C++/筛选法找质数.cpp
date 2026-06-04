#include<iostream>
using namespace std;
bool a[1001];
int main()
{
	int n;
	cin >> n;
	for (int i = 2;i <= n;i++)
	{
			for (int j = i+1;j <= n;j++)
			{
				if (j % i == 0)
				{
					a[j] = true;
				}
			} 
	}
	for (int i = 2;i <= n;i++)
	{
		if (a[i] == false)
		{
			cout << i << endl;
		}
	}
	return 0;
}
