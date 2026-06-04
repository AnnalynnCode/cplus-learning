#include<iostream>
using namespace std;
int main()
{
	int hi,lo,x;
	for(int i=1;;i+=1)
	{
		x=i*i;
	    if (x<1000)
		{
			continue;	
		}		
		if (x>9999)
		{
			break;
		}
		hi=x/100;
		lo=x%100;
		if (hi/10 == hi%10 && lo/10 == lo%10)
		{
			cout << x<<" ";
		}
	}
	return 0;
}
