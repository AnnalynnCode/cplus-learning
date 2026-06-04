#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n,m,a;
	cin >> n >> m;
	a=n-m*0.8;
	//保留两位小数 
	cout << fixed<< setprecision(2)<<a;
	//如果用下面这种方式，末尾的0会被去掉，例如20.00会变成20 
	//cout << setprecision(2)<<a;
	return 0;	
}
