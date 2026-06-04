#include<iostream>
using namespace std;
int main()
{
    int n,m;
	cin >> n>>m;
	int g=n>m?m:n;
	while(true)
	{
	    if (n%g==0 && m%g==0)
		{
		    cout << g;
			break;	
		}	
		else
		{
			g-=1;
		}
    }
    return 0;
} 
