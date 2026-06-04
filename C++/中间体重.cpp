#include<iostream>
using namespace std;
int main()
{
	double a,b,c;	
	double zhongjian;
	cin >> a >>b >>c;
	if ((a<b && a>c) || (a>b && a<c))
	{
	    zhongjian=a;
	}
	else if ((b<a && b>c) || (b<c && b>a))
	{
		zhongjian=b;
	}
	else if((c<a && c>b) || (c<b && c>a))
	{
		zhongjian=c;
	}
	cout << zhongjian;
	return 0;
}
