#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a > b;
}
int main(){
	int m,n,a[101],num = 0;
	cin >>m >>n;
	for (int i = 0;i < n;i++){
		cin >>a[i];
		num += a[i];
	}
	if (num < m){
		cout << "NO";
		return 0;
	}
	sort(a,a+n,cmp);
	num = 0;
	int sum = 0;
	for (int i  = 0;i < n;i++){
		num += a[i];
		sum++;
		if (num >= m){
			cout << sum;
			return 0; 
		}
	}
	return 0;
} 
