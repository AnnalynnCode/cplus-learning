#include<iostream>
using namespace std;
int a[101][101];
int main(){
	int n,m;
	cin >> n>>m;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			if (i != 0 && j != 0 && i != n - 1 && j != m - 1){
				if (a[i][j] > a[i+1][j] && a[i][j] > a[i-1][j] && a[i][j] > a[i][j-1] && a[i][j] > a[i][j+1]){
					cout << a[i][j] << endl;
				}
			}
		}
	}
	return 0;
}
