#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	while(cin >> num)
	{
		if(num>0)
		{
			sum+=1;
		}
	}
	cout << sum;
	return 0;
}
