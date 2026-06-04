#include<iostream>
using namespace std;
int main(){
	int n,m,max = 0,min = 101,a[201][201],x,b;
	cin >> n >> m;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if (a[i][j] > max){
				max = a[i][j];
				x = i * 10 + j;
			}
			if (a[i][j] < min){
				min = a[i][j];
				b = i * 10 + j;
			}
		}
	}
	a[b / 10][b % 10] = max;
	a[x / 10][x % 10] = min;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
