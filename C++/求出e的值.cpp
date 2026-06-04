#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long n,t=1;
    double e=1;
	cin >> n;
	for (int i=1;i<=n;i+=1)
	{   
		t*=i;
		e+=1.0/t;	
	}
	cout <<fixed<<setprecision(10)<< e;
	return 0;	
}
