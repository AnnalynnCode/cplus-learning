#include<iostream>
#include<iomanip>
using namespace std;
int a[11][11];
int main(){
	int n,sum = 1;
	cin >> n;
	for (int j = 0;j < n;j++){
		for (int i = 0;i < n;i++){
			a[i][j] = sum;
			sum++;
		}
	}
	for (int j = 0;j < n;j++){
		for (int i = 0;i < n;i++){
			cout << setw(3) <<a[j][i];
		}
		cout << endl;
	}
	return 0;
}
