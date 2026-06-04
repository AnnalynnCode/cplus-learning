#include<bits/stdc++.h>
using namespace std;
long long n,m,a[2000005];
bool check(long long s){
	int cnt = 0;
	for (int i = n - 1;i >= 0;i--){
		int u = 0;
		if (a[i] >= s){
			cnt++;
		}else{
			while(u < i && a[u]+a[i] < s){
				u++;
			}
			if (u >= i){
				break;
			}else{
				cnt++;
				u++;
			}
		}
	}
	return cnt >= m;
}
int main(){
	freopen("sowrd.in","r",stdin);
	freopen("sowrd.out","w",stdout);
	cin >> n >> m;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	long long left = 0,right = 2000000,answer = 0;
	while(left <= right){
		long long mid = (left + right) / 2;
		if (check(mid)){
			answer = mid;
			left = mid + 1;
		}else{
			right = mid - 1;
		}
	}
	cout << answer;
	return 0;
}
