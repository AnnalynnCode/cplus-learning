#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[11],b[11];
	cin >> a >> b;
	cout <<strncmp(a,b,3);
	return 0;
} 
