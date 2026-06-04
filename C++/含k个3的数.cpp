#include<iostream>
using namespace std;
int main()
{
	int m,k,r=0;
	cin >>m>>k;
	if(m%19!=0)
	{
		cout << "NO";
	}
	else
	{
		do
		{
			if(m%10==3)
			{
				r+=1;					
			}
			m/=10;
		}
		while(m!=0);
		if(r==k)
		{
			cout <<"YES";
		}
		else
		{
			cout <<"NO";
		}
	}
	return 0;
}
