#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char a='A'; 
	for (int i=1;i<=n;i+=1)
	{
		for (int j=n-i;j>=1;j-=1)
		{
			cout<<' ';
		}
		for (int k=i;k>=1;k-=1)
		{
			cout <<char(a+k-1);
		}
		for (int l=2;l<=i;l+=1)
		{
			cout <<char(a+l-1); 
		}
		cout << endl;
	}
	return 0;
}
