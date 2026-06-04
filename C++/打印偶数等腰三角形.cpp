#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i=1;i<=n;i+=1)
	{
		for (int j=n;j>i;j-=1)
		{
			cout<<setw(4)<<' ';
		}
		for (int k=i;k>=1;k-=1)
		{
			cout << setw(4)<<2*k;
		}
		for (int l=2;l<=i;l+=1)
		{
			cout << setw(4)<<2*l; 
		}
		cout << endl;
	}
	return 0;
}
