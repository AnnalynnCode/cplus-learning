#include<iostream>
using namespace std;
int a[20][20];
int main(){
	int n;
	cin >> n;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < n;j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0;i < n;i++){
		for (int j = 0;j < n;j++){
			if ((n - 1 - j) == i || i == j){
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
