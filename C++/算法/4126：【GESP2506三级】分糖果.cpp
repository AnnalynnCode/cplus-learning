#include<bits/stdc++.h>
using namespace std;
long long a[1005];
int main(){
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> a[i];	
	}
	long long  cnt = a[1],last = a[1],now;
	for (int i = 2;i <= n;i++){
		now = max(last+1,a[i]);
		cnt+=now;
		last = now;
	}
	cout<< cnt;
	return 0;
}
