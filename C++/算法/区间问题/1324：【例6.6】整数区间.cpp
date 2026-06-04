#include<bits/stdc++.h>
using namespace std;
struct nod{
	int l,r;
};
nod a[10005];
bool cmp(nod x,nod y){
	return x.r < y.r;
}
int main(){
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) cin >> a[i].l >> a[i].r;
	sort(a+1,a+1+n,cmp);
	int ans = 1,cur = a[1].r;
	for (int i = 2;i <= n;i++){
		if (a[i].l > cur){
			ans++;
			cur = a[i].r;
		}
	}	
	cout << ans;
	return 0;
}
