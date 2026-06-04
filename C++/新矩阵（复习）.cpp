#include<iostream>
using namespace std;
int main(){
	int a[21][21];
	int n;
	cin >> n;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < n;j++){
			cin >> a[i][j]; 
		}
	}
	for (int i = 0;i < n;i++){
		for (int j = 0;j < n;j++){
			if (i == j || j == n - i - 1){//i + j == n - 1、j == n - i - 1、i == j:判断对角线元素的方法 
				a[i][j] += 10;
			}
		}
	}
	for (int i = 0;i < n;i++){
		for (int j = 0;j < n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
} 
