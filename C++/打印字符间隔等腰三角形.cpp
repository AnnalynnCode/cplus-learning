#include<iostream>
using namespace std;
int main()
{
	int s;
	char ch;
	cin >> s>>ch;
	for (int i=1;i<=s;i+=1)
	{
		for (int j1=1;j1<=s-i;j1+=1)
		{
			cout << ' ';
		}
		for(int j2=1;j2<=i;j2+=1)
		{
			cout << ch;
			cout << ' ';
		}
		cout << endl;
	}
	return 0;
}
