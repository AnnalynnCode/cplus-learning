#include<iostream>
using namespace std;
int main()
{
    long long n,g=1,gg=0;
	cin >> n;
	for (int i=1;;i+=1)
	{
		g=1;
		if (i>n)
		{
			break;
		}
	    for(int j=1;j<=i;j+=1)
		{
			g*=j;	
		}
		gg+=g;	
	}
	cout << gg;
	return 0;	
}
