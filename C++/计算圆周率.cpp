#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() 
{
    double pi=0,num=3.0,result=1.0; 
    int s = 1;
	while(abs(1/num)>=0.00000001)
	{
	    s = s * (-1); 
		result=result + (1.0/num) * s;
	    num = num + 2;
	}
	pi =4 * result;
	cout<<fixed<<setprecision(10)<<pi; 
	return 0;
}  
