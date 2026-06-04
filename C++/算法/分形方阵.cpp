#include<bits/stdc++.h>
using namespace std;
char c[2050][2050];
int len;
void go(int k,int x,int y){
	if (k == 0){
		c[x][y] = '#';
		return;
	} 
	int s = pow(2,k-1);
	go(k-1,x,y);      //×óÉÏ 
	go(k-1,x,y+s);//ÓÒÉÏ 
	go(k-1,x+s,y);//×óÏÂ 
}
int main(){
	int n;
	cin >> n;
	len = pow(2,n);
	for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            c[i][j] = '.';
        }
    }
	go(n,0,0);
	for (int i = 0;i < len;i++){
		for (int j = 0;j < len;j++){
			cout << c[i][j];
		}
		cout << endl;
	}
	return 0;
}
