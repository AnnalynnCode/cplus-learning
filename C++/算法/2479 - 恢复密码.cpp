#include<bits/stdc++.h>
using namespace std;
int n,a[1005],b[1005];
bool f[2005];
bool check(int k){
	memset(f,0,sizeof(f));
	f[k] = 1;
	b[0] = k;
	for (int i = 1;i < n;i++){
		b[i] = a[i-1]-b[i-1];
		if (f[b[i]] || b[i] < 1) return 0;
		else f[b[i]] = 1;
	}
	return 1;
}
int main(){
	cin >>n;
	for (int i = 0;i < n-1;i++)cin >> a[i];
	for (int i = 0;i < n;i++){
		if (check(i)){
			for(int j = 0;j < n;j++){
				cout << b[j]<<" ";
			}
			return 0;
		}
	}
	return 0;
}
