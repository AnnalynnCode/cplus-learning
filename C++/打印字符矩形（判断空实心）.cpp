#include<iostream>
using namespace std;
int main()
{
	int w,h,tf;
	char s;	
	cin >> w >> h >> s >> tf;
	if (tf == 0)
	{
		for (int i=1;i<=w;i+=1)
		{
			for (int j=1;j<=h;j+=1)
			{
				if (i==1 || i==w || j==1 || j==h)
				{
					cout << s;
				}
				else
				{
					cout << ' ';	
				}	
			}
			cout << endl;	
		}	
	}
	else if(tf == 1)
	{
		for (int i=1;i<=w;i+=1)
		{
			for (int j=1;j<=h;j+=1)
			{
				cout << s;
			}
			cout << endl;
		}
	}
} 
