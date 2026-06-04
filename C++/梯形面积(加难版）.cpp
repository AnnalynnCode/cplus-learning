#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int up=15;
	int down=25;
	double h=2*150/up;
	double s=(up+down)*h/2;
	cout <<fixed<<setprecision(2)<< s;
	return 0;
}
