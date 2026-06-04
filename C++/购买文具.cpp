#include<iostream>
using namespace std;
int main()
{
	double n,sum=0;
	cin >> n;
	n*=10;
	for (int x=1;x<=n/8;x+=1)
	{
		for (int y=1;y<=n/2;y+=1)
		{
			for (int z=1;z<=n/1;z+=1)
			{
				if (x*8+y*2+z*1==n && x+y+z>30)
				{
					sum+=1;
				}
			}	
		}	
	}
	cout << sum;
	return 0;
} 
