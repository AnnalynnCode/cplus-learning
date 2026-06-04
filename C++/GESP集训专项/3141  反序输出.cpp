#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
	cin >>n;
	int c[101];
	for (int i = 0;i < n;i++){
		cin >> c[i];
	} 
	for (int i = n - 1;i >= 0;i--){
		cout << c[i] << " ";
	}
	return 0;
} 
