#include<iostream>
using namespace std;
int main()
{
	int n,g1=0,g2=0,g3=0;
	cin >>n;
	for(int j,y,t,i=1;i<=n;i+=1)
	{
		cin>>j;
		g1+=j;
		cin>>y;
		g2+=y;
		cin>>t;
		g3+=t;
	}
	cout << g1<<' '<<g2<<' '<<g3<<' '<<g1+g2+g3;
}
