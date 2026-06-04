#include<bits/stdc++.h>
using namespace std;
int main(){
	int a = 0,b,t;
	cin >> a >>b;
	t = a;
	for (int i = 1;i < b;i++){
		a = a * t % 1000;
	}	
	if (a < 100){
		if (a < 10){
			cout <<"00";
		}else{
			cout <<"0";
		}
	}
	cout << a;
	return 0;
} 
