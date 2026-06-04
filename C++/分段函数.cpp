#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double n,y;
	int range;
	cin >> n;
	if (int(n)>=0 && int(n)<5){
	    range = 1;
	}
	else if (int(n)>=5 && int(n)<10){
		range = 2;
	}
	else if (int(n)>=10 && int(n)<20){
		range = 3;
	}
	else{
		range = 4;
	}
	
	switch(range)
	{
		case(1):
		    y=-n+2.5;
		    cout <<fixed<<setprecision(3)<<y;
		    break;
		case(2):
		    y=2-1.5*(n-3)*(n-3);
		    cout <<fixed<<setprecision(3)<<y;
		    break;
		case(3):
		    y=n/2-1.5;
		    cout <<fixed<<setprecision(3)<<y;
		    break;
		case(4):
			cout << "请输入0-20之间的数字" <<endl;
			break;
	}
	return 0;
}
