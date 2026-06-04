#include<iostream>
using namespace std;
int main()
{
    int n,m,g=0;
	cin >> m >> n;
	for(int i=m;i<=n;i+=1)
	{
		if (i%2!=0)
		{
		    g+=i;	
		}    	
	}
	cout << g;
	return 0;	
} 
