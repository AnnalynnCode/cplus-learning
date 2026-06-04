#include<bits/stdc++.h>
using namespace std;
long long tong[100005],a[100005];
int main(){
	long long n;
	cin >>n;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
		tong[a[i]]++;
	}
	long long x,y;
	long long max = -1,n_max = 0;
	for (int i = 1;i <= 100000;i++){
		if (tong[i] > max){
			max = tong[i];
			n_max = i;
		}
	}
	x = max;
	max = -1;
	for (int i = 1;i <= 100000;i++){
		if (tong[i] > max && i != n_max){
			max = tong[i];
		}
	}
	y = max;
	cout <<x+y;
	return 0;
}
