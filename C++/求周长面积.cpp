#include<iostream>
using namespace std;
const double PI = 3.1415926;
int main()
{
	double r;
	cin >> r;
	double perimeter=2*PI*r,area=PI*r*r;
	cout << perimeter<<endl<<area;
}
