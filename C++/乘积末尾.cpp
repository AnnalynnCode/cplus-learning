#include<iostream>
using namespace std;
int main()
{
	int i=0,b=1;
	do
	{
		i+=1; 
	    b = (b*18)%100;
	}while (i<2018);
	cout << b;
	return 0;
}
