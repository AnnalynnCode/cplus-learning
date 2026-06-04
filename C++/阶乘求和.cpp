#include<iostream>
using namespace std;
int jc(int j){
	int s = 1;
	for (int i = 1;i <= j;i++){
		s *= i;
	}
	return s;
} 
int main(){
	int n,h = 0;
	cin >>n;
	for (int j = 1;j <= n;j++){
		h += jc(j);
	}
	cout << h;
	return 0;
} 
