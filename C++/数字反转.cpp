#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
	cin >> n;
	do
	{
		s*=10;
		s+=n%10;
		n/=10; 
	}
	while(n!=0);
	cout<<s;
	return 0;
} 
