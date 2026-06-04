#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[105],b[105],y;
	cin >> n;
	int maxn = -1;
	int maxv = 0;
	for (int i = 0;i < n;i++){
		cin >> a[i];
		if (a[i] > maxn){
			maxn = a[i];
			maxv = i;
		}
	}
	cin >> y;
	int u =0;
	for (int i = 0;i <= n;i++){
		if (i == maxv+1){
			cout << y<<" ";
			u=1;
			continue;
		}else{
			cout << a[i-u]<<" ";
		}	
	}
	return 0;
} 
