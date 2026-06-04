#include<iostream>
using namespace std;
int main() 
{
	int n,m,i=1,g;
	cin >>n>> m;
	int minn= n > m ? m : n;
	while(i<=minn)
	{
	    if (n % i==0 && m % i == 0)
		{
			g=i;
		}	
		i+=1;
	}
	cout << g;
	return 0;
}
