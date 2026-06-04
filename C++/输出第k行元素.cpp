#include<iostream>
using namespace std;
int main(){
	int a[21][21];
	int n,k;
	cin >> n;
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= n;j++){
			cin >> a[i][j];
		}		
	}
	cin >> k;
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= n;j++){
			if (i == k){
				cout << a[i][j] << " ";
			}
		}
	}
	return 0;
} 
