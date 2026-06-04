#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i=0;
    long long sum=1;
	cin >>n;
	do{	
		sum=(sum*92)%100;
		i+=1;
	  }while(i<n);
	cout<<sum;
} 
