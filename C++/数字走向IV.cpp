#include<iostream>
#include<iomanip>
using namespace std;
int a[11][11];
int main(){
	int n,sum;
	cin >> n;
	sum = n * n;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < n;j++){
			a[j][i] = sum;
			sum--;
		}
	}
	for (int i = n - 1;i >= 0;i--){
		for (int j = 0;j<n;j++){
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
	return 0;
}
