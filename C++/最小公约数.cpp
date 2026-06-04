#include<iostream>
using namespace std;
int main()
{ 
    int g,n,m,i=1,a;
    cin >> n >> m;
    int minn=n>m?m:n;
    while(i<=minn)
    {
    	if (n % i==0 && m % i==0)
    	{
    		g=i;
		}
		i+=1; 
	}
	a=n*m;
	cout << a/g;
} 
