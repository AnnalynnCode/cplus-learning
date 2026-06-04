#include<iostream>
using namespace std;
int main()
{
	int n,i=2;
	cin >> n;
	cout << n << '=';
	while(1)
	{
		if (n%i==0)
		{
			cout << i;
			n=n/i;
			if (n==1)
			{
				break;
			}
			else
			{
				cout << '*';	
			}	
		}	
		else
		{
			i+=1;
		}
	}
	return 0;	
} 
