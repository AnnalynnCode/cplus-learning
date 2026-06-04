#include<iostream>
using namespace std;
int main()
{
	int n;
	char ch;
	cin >> n >> ch;
	for (int j=1;j<=n;j+=1)
	{
		cout << ' ';
	}
	cout << ch<<endl;
	for (int i=1;i<=n;i+=1)
	{
		for (int j=i;j<n;j+=1)
		{
			cout << ' ';
		}
		cout << ch;
		for (int k=2;k<=2*i;k+=1)
		{
			cout << ' ';
		}
		cout << ch << endl; 
	}//Õý½áÊø
	for (int i=n-1;i>=1;i-=1)
	{
		for (int j=i;j<n;j+=1)
		{
			cout << ' ';	
		}		
		cout << ch;
		for(int d=1;d<=2*i-1;d+=1)
		{
			cout << ' ';
		}
		cout << ch << endl;
	}  
	for (int i=1;i<=n;i+=1)
	{
		cout << ' ';
	}
	cout << ch;
	return 0;
} 
