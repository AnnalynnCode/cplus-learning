#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
long long cnt = 0;
void msort(int s,int t){
	if (s == t) return;
	int mid = (s+t)/2;
	msort(s,mid);
	msort(mid+1,t);
	//合并
	int i = s,j = mid+1,k = s;
	while(i <= mid && j <= t){
		if (a[i] <= a[j]){
			b[k++] = a[i++];
		}else{
			b[k++] = a[j++],cnt+=mid-i+1;;
		}
	}
	while(i <= mid){
		b[k++] = a[i++];
	}
	while(j <= t){
		b[k++] = a[j++];
	}
	//将b复制到a
	for (int l = s;l <= t;l++){
		a[l] = b[l];
	} 
}
int main(){
	int n;
	cin >>n;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	msort(1,n);
	cout << cnt;
	return 0;
} 
