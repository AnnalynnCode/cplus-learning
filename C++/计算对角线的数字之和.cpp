#include<iostream>
using namespace std;
int main(){
	int a[11][11],n,sum = 0;
	cin >> n;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < n;j++){
			cin >> a[i][j];
			if (i == j || i + j == n - 1){
				sum += a[i][j];
			} 
		}
	}
	cout << sum;
	return 0;
}
