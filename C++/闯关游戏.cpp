#include<iostream>
using namespace std;
int main()
{
    int a,b;
	cout << "1.荒野求生 2.急中生智";
	cin >> a;
	if(a==1)
	{
	    cout << "1.简单 2.困难";
		cin >>b;	
	    if(b==1)
		{
			cout << "正在跳转荒野求生->简单";
		} 
		else if(b==2) 
		{
		    cout << "正在跳转荒野求生->困难";	
		}
	}
	else if (a==2)
	{
	    cout << "1.中等 2.困难";
		cin >>b;	
	    if(b==1)
		{
			cout << "正在跳转急中生智->中等";
		} 
		else if (b==2)
		{
		    cout << "正在跳转急中生智->困难";	
		}
	}
	return 0;		
}
