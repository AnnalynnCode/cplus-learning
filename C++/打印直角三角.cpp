#include<iostream>
using namespace std;
int main()
{
	int n;
	char s;
	cin >> n >> s;
	for (int i=1;i<=n;i+=1)
	{
		for (int j=1;j<=i;j+=1)
		{
			cout << s;
		}
		cout << endl;
	}
	return 0; 
}
