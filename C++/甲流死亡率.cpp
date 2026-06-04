#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a,b;
	double c;
	cin >> a >> b;
	c=b/a;
	cout << fixed << setprecision(3)<<(c*100)<<"%";
	return 0;
}
