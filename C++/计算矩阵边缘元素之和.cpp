#include<iostream>
using namespace std;
int a[101][101];
int main(){
	int n,m,s = 0;
	cin >> n >> m;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			if (i == 0 || i == n - 1 || j == 0 || j == m - 1){
				s += a[i][j];
			}
		}
	}
	cout << s;
	return 0;
}
