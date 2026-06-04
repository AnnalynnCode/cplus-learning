#include<iostream>
using namespace std;
int main()
{
	int w,h;
	char s;
	cin >>w>>h>>s;
	for (int i=1;i<=h;i+=1)
	{
		for (int j=1;j<=w;j+=1)
		{
			cout << s;
		}
		cout << endl;
	}
}
