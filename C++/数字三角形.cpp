#include<iostream>
using namespace std;
int main()
{
	int n,a=1;
	cin >> n;
	for (int i=1;i<=n;i+=1)
	{	
		for (int j=1;j<=i;j+=1)
		{			
			cout << a%10;
			a+=1;
		}
		cout <<endl;
	}
	return 0;	
} 
