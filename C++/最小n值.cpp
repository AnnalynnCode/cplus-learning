#include<iostream>
using namespace std;
int main()
{
	int n=0,m,g=0;
	cin >> m;
	while(g<m)
	{
		n+=1;
		g+=1/n;
	}
	cout <<n;
	return 0;
}
