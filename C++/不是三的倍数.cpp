#include<iostream>
using namespace std;
int main()
{
	for (int i=100;i<=200;i+=1)
	{
		if (i%3==0)
		{
			continue;
		}
		else
		{
			cout << i<<' ';
		}
	}
	return 0;
}

