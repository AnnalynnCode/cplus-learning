#include<iostream>
using namespace std;
int a[101][101],b[101][101];
int main(){
	int n,m;
	cin >> n >> m;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	} 
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			b[j][i] = a[n - i - 1][j];
		}
	}
	for (int i = 0;i < m;i++){
		for (int j = 0;j < n;j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
