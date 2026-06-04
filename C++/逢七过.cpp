#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >>a;
	for (int i=a;i<=100;i+=1)
	{
		if (i%7==0 || i%10==7 || i/10==7)
		{
			continue;	
		} 
		cout <<i<<' ';
	}
	return 0;
}
