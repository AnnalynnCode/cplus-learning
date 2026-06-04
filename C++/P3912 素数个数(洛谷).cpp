#include<bits/stdc++.h>
using namespace std;
bool tf[100000005];
int main(){
	int n;
	cin >> n;
	for (int i = 2;i <= sqrt(n);i++){
		if (!tf[i]){
			for (int j = i*2;j <= n;j+=i){
				tf[j] = true;
			}
		}	
	}
	int c = 0;
	for (int i = 2;i <= n;i++){
		if (!tf[i]){
			c++;
		}
	}
	cout << c;
	return 0;
} 
