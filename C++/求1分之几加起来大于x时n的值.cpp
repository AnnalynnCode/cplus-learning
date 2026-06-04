#include<iostream>
using namespace std;
int main()
{
	int x,n=0;
	double s=0.0;
	cin >> x;
	while(s<=x)
	{
		n+=1;	
		s+=1.0/n; 
	}
	cout <<n;
}
