#include<iostream>
#include<cstring>
using namespace std;
char a[256]; 
int main(){
	cin >> a;
	int s = strlen(a);
	
	for (int i = s;i>=0;i--)
	{
		cout << a[i];
	}
	return 0;
}
