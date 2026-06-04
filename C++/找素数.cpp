#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin >>a>>b;
	int c=a<b?a:b;
	int d=a<b?b:a;
	for (int i=c;i<=d;i+=1)
	{
		int x=2;
		while (i%x!=0)
		{
			x+=1;
		}
		if(i==x)
		{
			cout << i << endl; 
		}
		else
		{
			continue;
		}
	}
	return 0;
}
