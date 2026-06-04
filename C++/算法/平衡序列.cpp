#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[10005],t;
	cin >> t;
	for (int i = 1;i <= t;i++) {
		cin >> n;
		int num = 0;
		for (int i = 1; i<=n;i++){
			cin >> a[i];
			num += a[i];
		}
		if (num % 2 != 0){
			cout << "No";
		}else{
			int h2 = 0;
			for (int i = 1;i < n;i++){
				for (int j = i+1;j <= n;j++){
					h2 += a[j];
				}
				if (h1 == h2){
					cout << "Yes";
					break;	
				}
			}	
		}
	}
	return 0;
} 
