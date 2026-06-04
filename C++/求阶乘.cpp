#include<iostream>
using namespace std;
int main()
{
	long n,a;
	a=1;
	cin >> n;
	for(int i=1;i<=n;i+=1)
	{
		a*=i;
	}
	cout << a;
	return 0;
}
