#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double v,r;
	cin >> r;
	v=double(4)/double(3)*3.14*pow(r,3);
	cout << fixed << setprecision(2)<<v;
	return 0;
}

