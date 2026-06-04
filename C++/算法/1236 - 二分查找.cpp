#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int bs(int l,int r,int v){
	while(l <= r){
		int mid = (l+r) / 2;
		if (a[mid] == v){
			return mid;
		}else if (a[mid] > v){
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	return -1;
}
int main(){
	int n,v;
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> a[i]; 
	}
	cin >> v;
	cout << bs(1,n,v);
	return 0;
} 
