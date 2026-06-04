#include<iostream>
using namespace std;
int main()
{
	int n=0,j=0,t=0,s=0;
	for (n=0;n<100;n++)
	{
		for (j=0;j<100;j++)
		{
			for (t=0;t<100;t++)
			{
				if ((n*9+j+t==100)&&(n*2+j*2+t*4==100))
				{
					cout << n <<' '<< j <<' '<< t<<endl;
					s+=1;
				}
			}
		}
	}
	cout << s;
	return 0;
} 
