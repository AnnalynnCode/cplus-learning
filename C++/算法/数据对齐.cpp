#include<bits/stdc++.h>
using namespace std;
int a[3000005];
int bs(int left,int right,int v){
	if (v <= a[left]){
		return a[left];
	}
	if (v >= a[right]){
		return a[right];
	}
	int mid;
	while(left <= right){
		mid = (left + right) / 2;
		if (a[mid] == v) return a[mid];
		else if (a[mid] > v) right = mid-1;
		else left = mid + 1;
	}
	int d1 = abs(a[left] - v);
	int d2 = abs(a[right] - v);
	if (d1 <= d2) return a[left];
	else return a[right];
}
int main(){
	int n,m,x;
	scanf("%d %d",&n,&m);
	for (int i = 1;i <= n;i++) scanf("%d",&a[i]);
	sort(a+1,a+1+n);
	for (int i = 1;i <= m;i++){
		scanf("%d",&x);
		printf("%d",abs(bs(1,n,x) - x));
		printf("\n");	
	}
	return 0;
}
