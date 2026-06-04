#include<bits/stdc++.h>
using namespace std;
char a[105][105];
bool b[105][105];
int main(){
	int n,m;
	cin >>n;
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= n;j++){
			cin >> a[i][j];
		}
	}
	cin >> m;
	for (int k = 1;k <= m-1;k++){
		memset(b,0,sizeof(b));
		for (int i = 1;i <= n;i++){
			for (int j = 1;j <= n;j++){
				if (a[i][j] == '@' && b[i][j] == 0){
					if (a[i+1][j] == '.'){
						a[i+1][j] = '@';
						b[i+1][j] = 1;
					}
					if (a[i-1][j] == '.'){
						a[i-1][j] = '@';
						b[i-1][j] = 1;
					}
					if (a[i][j+1] == '.'){
						a[i][j+1] = '@';
						b[i][j+1] = 1;
					}
					if (a[i][j-1] == '.'){
						a[i][j-1] = '@';
						b[i][j-1] = 1;
					}
				}
			}
		}
	}
	int cnt = 0;
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= n;j++){
			if (a[i][j] == '@'){
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}
