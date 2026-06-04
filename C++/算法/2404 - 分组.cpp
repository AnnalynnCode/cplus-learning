#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int  y){
	return x > y;
}
int main(){
	int n;
	int nan[10001],nv[10001];
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> nan[i];
	}
	for (int i = 0;i < n;i++){
		cin >> nv[i];
	}
	sort(nan,nan+n);
	sort(nv,nv+n,cmp);
	int sum = 0;
	for (int i = 0;i < n;i++){
		sum += abs(nan[i]-nv[i]);
	}
	cout << sum;
	return 0;
}
