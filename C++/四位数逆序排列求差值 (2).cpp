#include<iostream>
using namespace std;
int main()
{
	int num1;
	cin >> num1;
	int n1=num1/1000;
	int n2=num1/100%10;
	int n3=num1/10%10;
	int n4=num1%10;
	int num2=n4*1000+n3*100+n2*10+n1;
	cout << num1-num2;
	return 0;
}
