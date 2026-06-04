#include<bits/stdc++.h>
using namespace std;
int a[100005];
bool bs(int left,int right,int v){
	while(left <= right){
		int mid = (left+right) / 2;
		if (a[mid] == v) return true;
		else if (a[mid] > v) right = mid - 1;
		else left = mid + 1;
	}
	return false;
}
int main(){
	int n,m,v;
	scanf("%d",&n);
	for (int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	scanf("%d",&m);
	for (int i = 0;i < m;i++){
		scanf("%d",&v);
		if (bs(0,n-1,v)){
			printf("Y ");
		}else{
			printf("N ");
		}
	}
	return 0;
} 
