#include<bits/stdc++.h>
using namespace std;
int t[1000001];
int main(){
	int n;
	cin >> n;
	int a[200001];
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	    if (t[a[i]] == 0){
	        t[a[i]] = 1;
	    }
	}	
	for (int i = 1;i <= n;i++){
		if (t[a[i]] == 1){
			cout << a[i] <<" "; 
			t[a[i]] = 0;
		}
	}
	return 0;
} 
