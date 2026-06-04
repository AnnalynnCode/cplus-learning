#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	cin>>a;
	double g,p;
	for(int number,i=1;i<=a;i+=1)
	{
		cin >>number;
		g+=number;
	}
	p=g/double(a);
	cout <<g<<' '<<fixed<<setprecision(5)<<p;
	return 0;
}
