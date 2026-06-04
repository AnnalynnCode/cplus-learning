#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,a=0;
	cin >> n;
	for (int i=2;;i+=1)
	{
		int b=2;
		while(b<=floor(sqrt(i))&& i%b!=0)
		{
			b+=1;
		}
		if (b>floor(sqrt(i)))
		{
			a+=1;
			if (a==n)
			{
				cout << i;
				break;	
			}	
		} 
	}
	return 0;
}
