#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long long count=0,number,max=0,min=1001;
	double avg,sum;
	while(cin >> number)
	{
		sum+=number;
		count+=1;
		if (number>max)
		{
		    max=number;
		}	
		if(number<min)
		{
			min=number;
		}
	}
	
	avg=sum/count;
	cout<<min<<' '<<max<<' '<<fixed<<setprecision(3)<<avg;
}
