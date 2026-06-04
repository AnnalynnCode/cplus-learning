#include<bits/stdc++.h>
using namespace std;
int s[50005],b[50005];
const int mod = 1000000007;
bool bs(int l,int r,int v){
	while(l <= r){
		int mid = (l+r)/2;
		if (s[mid] == v){
			return true;
		}else if (s[mid] > v){
			r = mid-1;
		}else{
			l = mid+1;
		}
	}
	return false;
}
int main(){
	int n,m;
	cin >>n >>m;
	for (int i = 1;i <= m;i++) cin >> b[i];
	s[1] = 0;
	s[2] = 1;
	for (int i = 3;i <= n;i++){
		s[i] = (s[i-1] + s[i-2]) % mod;
	}
	sort(s+1,s+1+n);
	int cnt= 0;
	for (int i = 1;i <= m;i++){
		if (bs(1,n,b[i])) cnt++;
	}
	cout << cnt;
	return 0;
}
