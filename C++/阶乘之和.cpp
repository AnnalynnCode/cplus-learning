#include<iostream>
using namespace std;
int main()
{
	int n,g,p=1;
	cin >> n;
	for (int i=1;i<=n;i+=1)
	{
		p=1;
		for (int j=1;j<=i;j+=1)
		{
			p*=j;
		} 
		g+=p;
	}
	cout << g;
	return 0; 
}
