#include<iostream>
using namespace std;
int main(){
	int n,m;
	int a[101][101];
	cin >> n >> m;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			if (a[i][j] != 0){
				cout << i + 1 <<" "<< j + 1 <<" "<< a[i][j] << endl;
				continue;
			}
		}
	}
	return 0;
}
