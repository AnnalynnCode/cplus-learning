#include<iostream>
using namespace std;
int main()
{
	int a,maxn,number;
	cin>>a;
	cin>>number;
	maxn=number;
	for(int i=1;i<a;i+=1)
	{
		cin>>number;
		if(number>maxn)
		{
			maxn=number;
		}
	}
	cout<<maxn;
}
