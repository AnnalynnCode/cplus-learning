#include<iostream>
using namespace std;
int main()
{
	int l,k=0,o3=1;
	cin >>l;
	for (int i=1;i<=l/3;i+=1)
	{
		for (int j=i;j<=(l-i)/2;j+=1)
		{   
			o3=l-i-j; 
			if (i+j>o3)
			{
				if (i==j && j==o3)
				{
					continue;	
				}
				else
				{
					k+=1;	
				}

			}
		}
	}
	cout << k;
	return 0;
}
