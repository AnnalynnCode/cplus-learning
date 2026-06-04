#include<bits/stdc++.h>
using namespace std;
int c(int x,int y){
	return x^y;
}
int main(){
  	int n;
  	cin >>n;
  	int a[500001];
  	for (int i = 1;i <= n;i++){
  		cin >> a[i];
	}
	int l,r;
	int num = 0; 
	cin >> l >>r;
	for (int i = l;i <= r;i++){
		for (int j = i + 1;j <= r;j++){
			num += c(a[i],a[j]);
		}
	}
	cout << num;
	return 0;
} 
