#include<iostream>
using namespace std;
int main()
{
	int g=0,a=0,c;
	for (int i=1;i<=30;i+=1)
	{
		cin >>a;
		g+=a;
		if (g>=1000)
		{
			c=i;
			break;
		}
	}
	cout << c<<" "<<g*1.0/c;
	return 0;
}
