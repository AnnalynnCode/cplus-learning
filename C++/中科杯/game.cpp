#include<bits/stdc++.h>
using namespace std;
long long dp[1005][1005];
struct o{
	int l,t,e;
} a[1005];
bool cmp(o x,o y){
	return x.l < y.l;
}
int main(){
	freopen("game.in","r",stdin);
	freopen("game.out","w",stdout);
	long long n,k,t;
	cin >> n >>k >> t;
	for (int i = 0;i <= t;i++){
		dp[0][i] = k;
	}
	for (int i = 1;i <= n;i++){
		cin >> a[i].l >> a[i].t>>a[i].e;
	}
	sort(a+1,a+n+1,cmp);
	for (int i = 1;i <= n;i++){
		for (int j = 0;j <= t;j++){
			dp[i][j] = dp[i-1][j];
			if (j >= a[i].t){
				long long before_level = dp[i - 1][j - a[i].t];
				if (before_level >= a[i].l){
					dp[i][j] = max(dp[i][j],before_level + a[i].e);
				}
			}	
		}
	}
	cout << dp[n][t];
	return 0;
} 
