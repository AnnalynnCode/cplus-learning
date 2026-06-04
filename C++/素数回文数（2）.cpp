#include<bits/stdc++.h>
using namespace std;
bool change(int n){
	string f,x;
	while(n){
		f += n % 10;
		n /= 10;
	}
	for (int i = f.size() - 1;i >= 0;i--){
		x += f[i];
	}
	if (f == x){
		return true;
	}else{
		return false;
	}
}
bool change2(int n){
	if (n <= 1){
		return false;
	}
	if (n == 2){
		return true;
	}
	if (n % 2 == 0){
		return false;
	}
	for (int i = 3;i <= sqrt(n);i+=2){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	for (int i = 10;i <= 1000;i++){
		if (change(i) == true && change2(i) == true){
			cout << i << endl;
		}
	}
	return 0; 
}

