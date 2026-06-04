#include<bits/stdc++.h>
using namespace std;
bool tf[1005];
int main(){
	int n;
	cin >> n;
	for (int i = 2;i < sqrt(n);i++){
		for (int j = i*2;j <= n;j+=i){
			tf[j] = true;
		}
	}
	for (int i = 2;i < n;i++){
		if (!tf[i]){
			cout << i << endl;
		}
	}
	return 0;
} 
