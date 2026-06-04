#include<bits/stdc++.h>
using namespace std;
int a[1030][1030];
int main(){
	int n,m;
	cin >> m;
	n = pow(2,m);
	a[1][1] = 1;//初始
	for (int k = 2;k <= n;k*=2){
		int half = k/2; //矩阵的一半
		for (int i = 1;i <= half;i++){//枚举1/4矩阵 
			for (int j = 1;j <= half;j++){
				a[i][j+half] = a[i][j]+half;//右 
				a[i+half][j] = a[i][j]+half;//上 
				a[i+half][j+half] = a[i][j];//右下 
			}
		}
	} 
	for(int i = 1;i <= n;i++){
		for (int j = 1;j <= n;j++){
			cout << a[i][j]<<" ";
		}
		cout << endl;
	} 
	return 0;
} 
