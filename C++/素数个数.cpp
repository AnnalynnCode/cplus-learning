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
	for (int j = 3;j <= sqrt(i);j++){
		if (i % j == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int n,s;
	cin >> n;
	for (int i = 2;i <= n;i++){
		if (num(i) == true){
			s++;	
		}
	}
	cout <<s;
	return 0;
}
