#include<iostream>
using namespace std;
int main()
{
	int n,st,sp;
	cin >> n;
	for (int i=0;i<n/2+1;i+=1)
	{
		st=n-2*i;
		sp=i;
		for (int j=0;j<sp;j+=1)
		{
			cout << ' ';
		}
		for (int j_2=0;j_2<st;j_2+=1)
		{
			cout << '*';
		}
		cout << endl;
	}
	
	for (int i=0;i<n/2;i+=1)
	{
		st=2*i+3;
		sp=n/2-1-i;
		for (int j=0;j<sp;j+=1)
		{
			cout << ' ';
		}
		for (int j_2=0;j_2<st;j_2+=1)
		{
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}
