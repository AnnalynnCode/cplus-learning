#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a > b;
}
int main(){
	int n,k;
	int a[1001];
	cin >> n >>k;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n,cmp);
	cout << a[k-1];
	return 0;
} 
