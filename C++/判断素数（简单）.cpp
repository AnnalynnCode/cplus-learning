#include<iostream>
#include<cmath>
using namespace std;
bool tf(int n){
	bool f = 1;
	for (int i = 2;i < n;i++){
		if (n % i == 0){
			f = 0;
			break;
		}
	}
	return f;
}
int main(){
	int n;
	cin >> n;
	if (n == 1){
		cout << "no";
		return 0;
	}
	if (tf(n) == true){
		cout << "yes";
	}else{
		cout << "no";
	}
	return 0;
} 
