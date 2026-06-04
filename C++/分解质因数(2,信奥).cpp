#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	bool tf = true;
	cin >>n;
	cout << n << "=";
	for (int i = 2;i <= n;i++){
		while(n % i == 0){
			if (tf == true){
				cout << i;
				tf = false;
			}else{
				cout <<'*'<<i;
			}
			n/=i;
		}
	}
	return 0;
} 
