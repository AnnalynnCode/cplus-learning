#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
void msort(int s,int t){
	if (s == t) return; //边界 
	int mid = (s+t)/2;  //二分点
	msort(s,mid);              //对左右部分分别进行归并排序 
	msort(mid+1,t); 
	//合并
	int i = s,j = mid+1,k = s;
	while(i <= mid && j <= t){ //左右均有数时，需要比较 
		if (a[i] <= a[j]){
			b[k++] = a[i++];
		}  else{
			b[k++] = a[j++];		
		}
	} 
	while(i <= mid){ //剩余 
		b[k++] = a[i++];
	} 
	while(j <= t){
		b[k++] = a[j++];
	}
	for (i = s;i <= t;i++) a[i] = b[i];    //把临时数组的值复制回a 
}
int main(){
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	msort(1,n);
	for (int i = 1;i <= n;i++) cout << a[i]<<" ";
	return 0;
}
