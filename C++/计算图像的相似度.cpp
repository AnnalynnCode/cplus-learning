#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n,m;
	double s = 0;
	int a[101][101],b[101][101]; 
	cin >> n >> m;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			cin >> b[i][j];
		}
	}
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			if (a[i][j] == b[i][j]){
				s++;
			}
		}
	}
	cout << fixed << setprecision(2) << (s/9)*100;
	return 0;
}
