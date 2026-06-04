#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long n,g=0;
	cin >> n;
	for (int i=2;i<=sqrt(n);i++)
	{
		if (n%i==0)
		{
			if (i==(n/i))
			{
				g+=i;	
			}
			else
			{
				g+=i+(n/i);
			}
		}
	}
	cout << g;
	return 0;
}
