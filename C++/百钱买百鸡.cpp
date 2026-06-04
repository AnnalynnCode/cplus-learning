#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	for (x=0;x<=100/5;x+=1)
	{
		for (y=0;y<=100/3;y+=1)
		{
			for(z=0;z<=100.0/(1.0/3.0);z+=1)
			{
				if(x*5+y*3+z/1/3==100 && x+y+z==100 && z%3==0)
				{
					cout << x <<" "<< y <<" "<< z<<endl;
				}
			} 
		}
	}
	return 0;
	
} 
