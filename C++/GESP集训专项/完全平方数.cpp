#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1005];
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	int cnt = 0;
	for (int i = 0;i < n-1;i++){
		for (int j = i+1;j < n;j++){
			int he = a[i]+a[j],sq = sqrt(he);
			cout << sqrt(he)<<" ";
			if (sq * sq == he){
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}
