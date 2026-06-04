#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a;
	if (a>0)
	{
		cin >> b;
		if (b<=a)
		{
			cout << "支付成功，正在出票"; 
		}
		else
		{ 
		    cout << "余量不足";
		}
	}
	else
	{
		cout << "系统无票，不能购买";
	}
	return 0; 
}
