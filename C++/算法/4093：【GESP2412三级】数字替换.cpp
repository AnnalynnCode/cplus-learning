#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	int max = -1,min = 1e9;
	int n,k;
	cin >>n >>k;
	for (int i = 0;i < n;i++){
		cin >> a[i];
		if (a[i] < min){
			min = a[i];
		}
		if (a[i] > max){
			max = a[i];
		}
	}
	for(int i = 0;i < n;i++){
		if (a[i] < k){
			a[i] = min; 
		}else if (a[i] > k){
			a[i] = max;
		}
		cout << a[i]<<" ";
	}
	return 0;
}
