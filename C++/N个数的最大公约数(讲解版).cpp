#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
	int n;
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for (int i = a[0];i > 0;i--){
		bool f = 0;
		for (int j = 0;j < n;j++){
			if (a[j] % i != 0){
				f = 1;
			}
		}
		if (f == 0){
			cout << i;
			return 0;
		}
	}
	return 0;
} 
