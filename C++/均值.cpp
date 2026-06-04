#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	cin>>a;
	double g;
	for(double number,i=1;i<=a;i+=1)
	{
		cin >>number;
		g+=number; 
	} 
	cout <<fixed<<setprecision(4)<<g/double(a);
}
