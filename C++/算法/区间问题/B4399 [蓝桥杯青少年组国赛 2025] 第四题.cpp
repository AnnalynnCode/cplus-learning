#include<bits/stdc++.h>
using namespace std;
struct u{
	int l,r;
};
bool cmp(u x,u y){
	return x.l > y.l;
}
int main(){
	int n;
	u a[100005];
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i].l >> a[i].r;
	}
	sort(a,a+n,cmp);
	long long num = 0,last = 1e9;
	for (int i = 0;i < n;i++){
		if (last > a[i].r){
			last = a[i].l;
			num+=last;
		}
	}
	cout << num;
	return 0;
}
