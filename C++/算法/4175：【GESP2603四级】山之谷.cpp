#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main(){
	int n,m,sum =0;
	cin >>n >>m;
	memset(a,0x3f,sizeof(a));
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= m;j++){
			cin >> a[i][j];
		}
	}
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= m;j++){
			if (a[i][j] <= a[i][j+1] &&
			 a[i][j] <= a[i][j-1] &&
			  a[i][j] <= a[i+1][j] &&
			   a[i][j] <= a[i-1][j] &&
			    a[i][j] <= a[i-1][j-1] &&
				 a[i][j] <= a[i-1][j+1] &&
				  a[i][j] <= a[i+1][j-1] &&
				   a[i][j] <= a[i+1][j+1]){
				sum ++;
			}
		}
	}
	cout << sum;
	return 0;
}
