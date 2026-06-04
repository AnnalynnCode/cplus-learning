#include<bits/stdc++.h>
using namespace std;
void fenjie(int n){
	cout << n <<"=";
	int y = 1;
	for (int i = 2;i <= n;i++){
		while(n % i == 0){
			if (y == 1){
				cout << i;
				y = 0;
			}else{
				cout <<"*"<< i ; 
			}
			n /= i;
		}
	}
	cout << endl;
}
int main(){
	int a,b;
	cin >>a >>b;
	for (int i = a;i <= b;i++){
		fenjie(i);
	}
	return 0;
}
