#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,j = 1;
	cin >> n;
	int v1,v2;
	for (int i = 2;i <= n;i++){
		if(n % i == 0){
			cout << n / i;
			return 0;
		} 
	}
	return 0;
} 
