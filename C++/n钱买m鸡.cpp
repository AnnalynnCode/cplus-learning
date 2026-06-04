#include<iostream>
using namespace std;
int main()
{
	int n,m,x,y;
	cin >> n >>m;
	for (x=0;x<=n/5;x+=1)
	{
		for (y=0;y<=n/3;y+=1)
		{
			if ((m-x-y)%3==0 && ((m-x-y)/3+ y*3 + x*5==n))
			{
				cout << x <<' '<< y<<' ' << m-x-y<<endl;	
			}
		}	
	} 
}
