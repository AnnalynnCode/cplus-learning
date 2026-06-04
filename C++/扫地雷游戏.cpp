#include<iostream>
using namespace std;
char a[101][101],b[101][101];
int main(){
	int n,m,s = 0;
	cin >> n >> m;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			if (a[i][j] == '?'){
				if (a[i-1][j] == '*'){
					s++;
				}	
				if (a[i+1][j] == '*'){
					s++;
				}	
				if (a[i][j+1] == '*'){
					s++;
				}	
				if (a[i][j-1] == '*'){
					s++;
				}	
				if (a[i-1][j-1] == '*'){
					s++;
				}	
				if (a[i-1][j+1] == '*'){
					s++;
				}	
				if (a[i+1][j-1] == '*'){
					s++;
				}	
				if (a[i+1][j+1] == '*'){
					s++;
				}	
				b[i][j] = s+'0';
				s = 0;
			}
			else if(a[i][j] == '*'){
				b[i][j] = a[i][j];
			}
		}
	}
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			cout << b[i][j];
		}
		cout << endl;
	}
	return 0;
}
