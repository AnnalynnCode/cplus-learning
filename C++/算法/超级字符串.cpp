#include<bits/stdc++.h>
using namespace std;
int main(){
	string a = "4567",b = "123",c = "";
	int n;
	cin >>n;
	for (int i = 1;i <= 1000000000;i++){
		if (c.size() < n){
			c = b+a;
			a = b;
			b = c;
		}else{
			break;
		}
	}
	cout << c[n-1];
	return 0;
} 
