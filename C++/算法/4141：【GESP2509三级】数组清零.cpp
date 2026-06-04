#include<bits/stdc++.h>
using namespace std;
int n,a[105];
bool check(){
	for (int i = 0;i < n;i++){
		if (a[i] != 0){
			return false;
		}
	}
	return true;
}
int main(){
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	int cnt = 0;
	while(true){
		int max = -1,min = 1000,k;
		for (int i = 0;i < n;i++){
			if (a[i] >= max){
				max = a[i];
				k = i;
			}
			if (a[i] != 0){
				if (a[i] < min){
					min = a[i];
				}
			}
		}	
		a[k] -= min;
		cnt++;
		if (check()){
			cout << cnt;
			return 0;
		}
	}
	return 0;
}
