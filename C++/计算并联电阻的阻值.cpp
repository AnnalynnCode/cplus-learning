#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double t1,t2,R;
	cin >> t1 >> t2;
	R=1/(1/t1+1/t2);
	cout << fixed <<setprecision(2)<<R;
	return 0;
}
