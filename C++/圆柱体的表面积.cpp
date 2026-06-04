#include<iostream>
using namespace std;
const double PI = 3.141592654;
int main()
{
	double r,h,area;
	cin >> r >> h;
	area = 2*PI*r*h+PI*r*r*2;
	cout  << area;
	return 0;
}
