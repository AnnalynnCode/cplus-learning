#include<iostream>
using namespace std;
int main()
{
	int w;
	char s;
	cin >> w>>s;
	for(int i=1;i<=w;i+=1)
	{
		for (int j=i;j<=w-1;j+=1)
		{
			cout << " ";
		}
		for (int k=1;k <= i*2-1;k+=1)
		{
			cout << s;
		}
		cout <<endl;
	}
	return 0;
}
