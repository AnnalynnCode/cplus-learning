#include<iostream>
using namespace std;
int main()
{
    int n,m,r;
    cin >> n >> m;
	r=n%m;
	while(r != 0)
	{
	    n=m;
		m=r;
		r=n%m;	
	}	
	cout << m;
	return 0;
} 
