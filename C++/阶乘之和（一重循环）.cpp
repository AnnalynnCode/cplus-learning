#include<iostream>
using namespace std;
int main()
{
	int n,s=0,p=1;
	cin >> n;
	for(int i=1;i<=n;i+=1)
	{
	    p*=i;
		s+=p;	
	}
	cout<< s;
	return 0;	
}
