#include<iostream>
using namespace std;
int a[201][201];
int main(){
	int n,m,a1,a2;
	cin >> n >> m;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	cin >> a1 >> a2;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			if (a[i][j] == a1){
				if (a[i-1][j] == a2 || a[i+1][j] == a2 || a[i][j-1] == a2 || a[i][j+1] == a2){
					cout << "yes";
					return 0;		
				}
			}
		}
	}
	cout << "no";
	return 0;
}
