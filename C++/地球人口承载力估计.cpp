#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double x,a,y,b,number1,number2,number3;
	cin >> x >>a>>y>>b;
	number1=y-x;
	number2=b-a;
	number3=int(number1)*int(number2);
	cout << fixed << setprecision(2) << number3;
	return 0;
}
