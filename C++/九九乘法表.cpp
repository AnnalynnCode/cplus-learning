#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for(int i=1;i<=9;i+=1)
	{
		for(int j=1;j<=i;j+=1)
		{
			cout << j<<'*'	<<i <<'='<<setw(2)<<i*j<<' ';
		}
		cout <<endl;	
	}
	return 0;	
} 
