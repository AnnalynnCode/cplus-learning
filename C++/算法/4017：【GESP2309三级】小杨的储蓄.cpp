#include<bits/stdc++.h>
using namespace std;
int dt[1005];
int main(){
	int n,d;
	cin >> n >> d;
	for (int i = 1;i <= d;i++){
		int y;
		cin >> y;
		dt[y] += i;
	}
	for (int i = 0;i < n;i++){
		cout <<dt[i]<<" ";
	}
	return 0;
}
