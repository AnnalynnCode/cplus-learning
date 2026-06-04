#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005],cnt = 0;
bool bs(int left,int right,int v){
	if (v < b[left] || v > b[right]){ //如果比b数组内最小的小或比最大的大，直接返回 false 
		return false;
	}
	while(left <= right){
		int mid = (left+right) / 2;
		if (b[mid] == v) return true;
		else if (b[mid] > v) right = mid-1;
		else left = mid+1;
	}
	return false; //没找到，返回 false 
}
int main(){
	int n,m;
	cin >> n >> m;
	for (int i = 1;i <= n;i++) cin >> a[i];
	for (int i = 1;i <= m;i++) cin >> b[i];
	sort(b+1,b+1+m);
	for (int i = 1;i <= n;i++){
		if (bs(1,m,a[i])){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
