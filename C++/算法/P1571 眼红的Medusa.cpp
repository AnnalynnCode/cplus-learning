#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
bool bs(int l,int r,int v){
	while(l <= r){
		int mid = (l+r) / 2;
		if (b[mid] == v){
			return true;
		}else if (b[mid] > v){
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	return false;
}
int main(){
	int n,m;
	cin >>n >>m;
	for (int i = 1;i <= n;i++) cin >> a[i];
	for (int i = 1;i <= m;i++) cin >> b[i];
	sort(b+1,b+1+m);
	for (int i = 1;i <= n;i++){
		if (bs(1,m,a[i])) cout << a[i]<<" ";
	}
	return 0;
} 
