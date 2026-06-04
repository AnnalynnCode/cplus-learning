#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
	int a,h=0,m=0,s=0;
	cin >> a;
	h=a/3600;
	m=(a%3600)/60;
	s=(a%3600)%60;
	cout<<setw(2)<<setfill('0')<<h<<':'<<setw(2)<<setfill('0')<<m<<':'<<setw(2)<<setfill('0')<<s;
	return 0;
}
