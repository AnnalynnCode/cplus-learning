#include <iostream>
using namespace std;
int main()
{
	int t; //声明变量t 
	cin >> t; //从键盘上输入 
	int a=t/100;//取个位数字 
	int b=t/10%10;//取十位数字 
	int c=t%10;//取百位数字 
	int d;//声明中间变量d 
	d=c;//个位数字与百位数字交换 
	c=a;
	a=d;
	cout << a << b << c;//打印交换后数字 
	return 0;
}
