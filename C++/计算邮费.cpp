#include<iostream>
using namespace std;
int main()
{
	int a,number;
	char b;
	number=0;
	cin >> a >> b;	
    number+=8;
	if (a>1000)
	{
	    if ((a-1000)%500!=0)
	    {
	    	number += (a-1000)/500*4;
	    	number += 4;
		}
		else
		{
			number += (a-1000)/500*4;
		}
	}
	if (b=='y')	
	{
		number+=5;
	}
    cout <<number;
    return 0;
}
