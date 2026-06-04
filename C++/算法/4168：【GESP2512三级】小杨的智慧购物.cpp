#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin >>m >> n;
	int mon_all = 0;
	int minn[100005];
	for (int i = 0;i < 100005;i++){
		minn[i] = 10005;
	}
	for (int i = 1;i <= n;i++){
		int k,p;
		cin >>k >>p;
		if (minn[k] > p){
			minn[k] = p;
		}
	}
	for (int i = 1;i <= m;i++){
		mon_all += minn[i]; 
	}
	cout << mon_all;
	return 0;
}
