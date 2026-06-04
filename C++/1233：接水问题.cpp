#include<bits/stdc++.h>
using namespace std;
int w[10005],s[105];
int main(){
	int n,m;
	cin >>n >>m;
	for (int i = 0;i < n;i++){
		cin >> w[i];
	}
	for(int i = 0;i < n;i++){
		int min = 100000;
		int mink = 0;
		for (int j = 0;j < m;j++){
			if (s[j] < min){
				min = s[j];
				mink = j;
			}
		}
		s[mink] += w[i];
	}
	int ans = 0;
	for (int i = 0;i < m;i++){
		ans = max(ans,w[i]);
	}
	cout << ans;
	return 0;
} 
