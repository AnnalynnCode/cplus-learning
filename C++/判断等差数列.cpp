#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n;
	int a[10001];
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i]; 
	}
	int o = 0;
	o = a[0] - a[1];
	for (int i = 0;i < n-1;i++){
		if (a[i] - a[i+1] != o){
			cout << "N";
			return 0;
		}
	}
	cout << "Y";
	return 0;
}
