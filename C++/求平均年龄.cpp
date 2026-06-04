#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
    int a;
    double g;
	cin >>a;
	for(int number,i=1;i<=a;i+=1)
	{
		cin >> number;
		g+=number; 
	}	
	cout<<fixed<<setprecision(2)<<g/double(a);
} 
