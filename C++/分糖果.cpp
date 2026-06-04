#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;	
    //操作a 
	a/=3;
	b+=a;
	e+=a;
	//操作b
	b/=3;
	a+=b;
	c+=b;
	//操作c
	c/=3;
	b+=c;
	d+=c;
	//操作d
	d/=3;
	c+=d;
	e+=d;
	//操作e
	e/=3;
	a+=e;
	d+=e;
	cout << setw(5) << a<< setw(5)<< b<< setw(5)<< c<<setw(5)<<d<<setw(5)<<e;
	return 0;
}
