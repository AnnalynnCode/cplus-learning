#include<iostream>
using namespace std;
int main()
{
	long long n,l=1,a,b;
	cin >> n;
	for (;;)
	{
		if (l<=n)
		{
			l*=2;
			continue;	
		} 
		else{
			break;
			l/=2; 
		}
	}
	a=n-l/2;
	b=l-n;
	if (a<b)
	{
		cout << l/2;
	}
	else
	{
		cout << l;
	}
} 
