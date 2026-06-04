#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[201];
	cin >> a;
	int s = 0;
	for (int i = 0;i < strlen(a);i++){
		s += a[i] - 48;
	}
	cout << s;
	return 0;
}
