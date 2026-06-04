#include<iostream>
using namespace std;
int a[21][21];
int main(){
	int n,num = 1;
	cin >> n;
	int x = 1,y = n;
	a[x][y] = num;
	for (int i = 1;i <= n * n;i++){
		while(a[x + 1][y] == 0 && x + 1 <= n){
			a[x+1][y] = ++num;
			x++;
		}
		while(a[x][y-1] == 0 && y - 1 > 0){
			a[x][y-1] = ++num;
			y--;
		}
		while(a[x - 1][y] == 0 && x - 1 > 0){
			a[x - 1][y] = ++num;
			x--;
		}
		while(a[x][y + 1] == 0 && y + 1 <= n){
			a[x][y + 1] = ++num;
			y++;
		}
	}
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
