#include<iostream>
using namespace std;
int main(){
	int n,x1 = 1;
	cin >> n;
	char x[50][50];
	for (int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if (i == j || j == n - i - 1){
				x[i][j] = '+';
			}else{
				x[i][j] = '-';
			}
		} 
	}
	for (int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout << x[i][j];
		} 
		cout << endl;
	}
	return 0;
}
