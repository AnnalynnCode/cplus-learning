#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1001];
	cin >>n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int t = unique(a,a+n) - (a+1);
	cout << t+1 << endl;
	for (int i = 0;i <= t;i++){
		cout << a[i]<<" ";
	}
	return 0;
}
