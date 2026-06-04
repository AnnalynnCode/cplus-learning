#include<iostream>
using namespace std;
int main()
{
	int st,sp,n;
	cin >> n;
	for (int i=0;i<n;i+=1)
	{
		st=i*2+n;
		sp=n-i-1;
		for (int j1=0;j1<sp;j1+=1)
		{
			cout << ' ';
		}
		for (int j2=0;j2<st;j2+=1)
		{
			cout << '*';
		}
		cout<<endl; 
	}
	return 0;
}
