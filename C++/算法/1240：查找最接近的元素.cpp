#include<bits/stdc++.h>
using namespace std;
int a[100005];
int bs(int l,int r,int v){ // 在[l,r]区间查找返回值最接近的 
	if (v > a[r]) return a[r];
	if (v < a[l]) return a[l];
	int mid;
	while(l <= r){
		mid = (l+r)/2;
		if (a[mid] == v) return a[mid];
		else if (a[mid] > v) r = mid-1;
		else l = mid+1;
	}
	//没找到，需要返回最接近的
	if (v < a[mid]){
		if (v - a[mid-1] <= a[mid] - v){
			return a[mid-1];
		}else{
			return a[mid];
		}
	} else{
		if (v - a[mid] <= a[mid+1] - v){
			return a[mid];
		}else{
			return a[mid+1];
		}
	}
}
int main(){
	int n,m;
	cin >> n;
	for (int i = 0;i < n;i++) cin >> a[i];
	sort(a,a+n); 
	cin >> m;
	int b;
	while(m--){
		cin >> b;
		cout << bs(0,n-1,b)<<endl;
	}
	return 0;
} 
