#include<iostream>
using namespace std;
int main(){
	int n,y,x;
	cin >> n;
	y = n / 2 + 1;
	x = n / 2 + 1;
	char a[30][30];
	for (int i = 0;i < n / 2;i++){
		for (int j = 0;j < n;j++){
			if (j == x || j == y){
				a[i][j] ='#';
			}else{
				a[i][j] = '.';
			}
		}
		x -= 1;
		y += 1;
	}
	x += 1;
	y -= 1;
	for (int i = 0;i < n / 2 - 1;i++){
		for (int j = 0;j < n;j++){
			if (j == x || j == y){
				a[i][j] = '#';
			}else{
				a[i][j] = '.';
			}
		}
		x += 1;
		y -= 1;
	}
	for (int i = 0;i < n;i++){
		for (int j = 0;j < n;j++){
			cout <<a[i][j]<< " ";
		}
		cout<<endl;
	}
	return 0;
} 
