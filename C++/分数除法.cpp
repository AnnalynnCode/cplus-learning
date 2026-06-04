#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	cin >>a >>b;
	double c=a/b;
	cout << fixed<<setprecision(9)<<c;
	return 0;
}

