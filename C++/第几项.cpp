#include<iostream>
using namespace std;
int main()
{
	int n=0,m;
	double sum = 0.0; 
	cin >> m;
	while(sum <m)
	{
		n++;
		sum+=1.0/n;
	}
	
	cout<<n;
	return 0;
}
