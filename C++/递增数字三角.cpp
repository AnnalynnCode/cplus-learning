#include<iostream>
using namespace std;
int  main()
{
	int s;
	cin >> s;
	for (int i=1;i<=s;i+=1)
	{
		for (int j=1;j<=i;j+=1)
		{
			cout << j;
		}
		cout << endl; 
	}
	return 0;
}
