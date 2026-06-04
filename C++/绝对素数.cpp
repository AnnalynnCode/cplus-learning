#include<iostream>
#include<cmath> 
using namespace std;
bool num(int i){
	if (i <= 1){
		return false;
	}
	if (i == 2){
		return true;
	}
	if (i % 2 == 0){
		return false;
	}
	for (int j = 3;j <= sqrt(i);j+=2){
		if (i % j == 0){
			return false;
		}
	}
	return true;
}
bool num1(int i){
	int a = i / 10,b = i % 10;
	int u = b * 10 + a;
	if (u <= 1){
		return false;
	}
	if (u % 2 == 0){
		return false;
	}
	for (int j = 3;j <= sqrt(u);j+=2){
		if (u % j == 0){
			return false;
		}
	}
	return true;
}
int main(){
	for (int i = 10;i <= 99;i++){
		if (num(i) == true && num1(i) == true) {
			cout << i << endl;
		}
	}
	return 0;
}
