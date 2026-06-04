#include<iostream>
#include<cmath>
using namespace std;
bool t(int i){
	bool b = 1;
	for (int j = 2;j < i;j++){
		if (i % j == 0){
			b = 0;
			break;
		} 
	}
	return b;
}
bool f(int i){
	i = i / 10 + (i % 10)*10;
	bool b = 1;
	for (int j = 2;j < i;j++){
		if (i % j == 0){
			b = 0;
			break;
		} 
	}
	return b;
}
int main(){
	for (int i = 10;i <= 99;i++){
		if (t(i) == true && f(i) == true){
			cout << i << " ";
		}
	}
	return 0;
} 
