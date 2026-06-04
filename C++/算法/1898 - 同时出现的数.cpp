#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
bool bs(int left,int right,int v){
	while(left <= right){
		int mid = (left+right)/2;
		if (a[mid] == v) return true;
		else if (a[mid] > v) right = mid - 1;
		else left = mid+1;
	}
	return false;
}
int main(){
	int n,m;
	cin >>n>>m;
	for (int i = 0;i < n;i++) cin >> a[i];
	for (int i = 0;i < m;i++) cin >> b[i];
	sort(a,a+n);
	sort(b,b+m);
	for (int i = 0;i < m;i++){
		if (bs(0,n-1,b[i])){
			cout << b[i]<<" ";
		}
	}
	return 0;
}
