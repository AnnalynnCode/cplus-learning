#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long n,p;
	cin >> n;	
	for (int i=2;i<=sqrt(n);i+=1)
	{
		p=n/i;
		if (n%i==0)
		{
			cout << p;
		}
		break;
	}
	return 0;
}
