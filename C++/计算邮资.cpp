#include<iostream>
using namespace std;
int main()
{
	int a,c;
	char b;
	c=8;
	cin >>a >>b;
	switch(1) 
	{
		case(500>=a-1000):
	        c+=(a-1000)/500;
	        break;
		case (b='y'):
		    c+=5;
		    break;
	}
	cout << c;
	return 0;
}
