#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double a,b;
	cin >>a >> b;
	double c=a/b-floor(a/b);
	cout << fixed << setprecision(9)<<c;
	return 0;
}
