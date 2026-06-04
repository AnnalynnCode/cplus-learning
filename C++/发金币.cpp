#include<iostream>
using namespace std;
int main()
{
	int n,z=0;
	cin >> n;
	int f=0;
	for (int i=1;;i+=1) 
	{
		for (int j=1;j<=i;j+=1)
		{
			z+=i;
			f+=1;
			if (f==n)
			{
				cout << z;
				return 0;
			}
		}
	}
	return 0;
}
