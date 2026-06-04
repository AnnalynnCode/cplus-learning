#include<iostream>
using namespace std;
int main()
{
	int m=0,n=0,h=0,w=0,t=0;
	cin >> m >>n >>h;
	while (1)
	{
		t+=1;
		w+=3;
		if (w>=10)
		{
			break;
		}
		else
		{
			w-=2;
		}
	}
	cout << t;
	return 0;
}
