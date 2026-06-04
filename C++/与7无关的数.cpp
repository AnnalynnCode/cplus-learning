#include<iostream>
using namespace std;
int main()
{
	int a,sum=0;
	cin >>a;
	for (int i=1;i<=a;i+=1)
	{
		if (i%7!=0 && i/10!=7 && i%10!=7)
		{
			sum+=i*i;	
		}
	}
	cout << sum;
	return 0;
}
