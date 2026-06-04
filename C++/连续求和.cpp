#include<iostream>
using namespace std;
int main()
{
	int s=0,i=0;
	while (s<=1000)
	{
		i+=1; 
		s+=i;
	}
	cout << i;
	return 0;
}
