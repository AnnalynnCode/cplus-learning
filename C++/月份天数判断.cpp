#include<iostream>
using namespace std;
int main()
{
	int x,y,day;
	cin >>x>>y;
	switch(y)
	{
		case(1):
		case(3):
		case(5):
		case(7):
		case(8):
		case(10):
		case(12):
			day=31;
			break;
		case(4):
		case(6):
		case(9):
		case(11):
			day=30;
			break;
		case(2):
			if((x%4==0 && x%100 != 0)||(x%400==0))
			{
				day=29;
			}
			else
			{
				day=28;
			}
			break;
	}
	cout << day;
	return 0;
}
