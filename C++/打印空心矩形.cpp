#include<iostream>
using namespace std;
int main()
{
	int w,l;
	char s;
	cin >> w >> l >> s;
	for (int i=1;i<=l;i+=1)
	{
		for (int j=1;j<=w;j+=1)
		{
			if(i==1 || i==l || j==1 || j==w)
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
	return 0;
}
