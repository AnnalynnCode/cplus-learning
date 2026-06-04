#include<iostream>
#include<iomanip>
using namespace std;
int a[11][11];
int main(){
	int n,sum = 0;
	cin >> n;
	sum = n * n;
	for (int i = n;i > 0;i--){
		for (int j = 0;j < n;j++){
			a[i][j] = sum;
			sum--;
		}
	}
	for (int i = n;i > 0;i--){
		for (int j = n - 1;j >= 0;j--){
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
	return 0;
}
