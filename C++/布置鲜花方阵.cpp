#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a[10][10],n;
	cin >> n;
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= n;j++){
			if (i + j == (n + 1) / 2 + 1 || i + j == (n + 1) / 2 + n || i - n / 2 == j || i + n / 2 == j){
				a[i][j] = 0;
			}else if(i == (n + 1) / 2 && j == (n + 1)/2 && i==j){
				a[i][j] = 0;
			}else{
				a[i][j] = 1;
			}
		}
	}
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= n;j++){
			cout << setw(3)<< a[i][j];
		} 
		cout << endl;
	}
	return 0;
} 
