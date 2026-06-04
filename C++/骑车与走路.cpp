#include<iostream>
using namespace std;
int main()
{
	double m;
	int a;
	cin >>m;
	if (m/1.2>50+m/3.0)
	{
		a=0;
	} 
	else if(m/1.2<50+m/3.0)
	{
		a=1;
	}
	else
	{
		a=2;
	}
	switch(a)
	{
		case (0):
		    cout << "Bike";
		    break;
		case (1):
			cout <<"Walk";
			break;
		case (2):
			cout <<"All";
			break;
	}
	return 0;
}
