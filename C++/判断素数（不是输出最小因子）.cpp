#include<iostream>
using namespace std;
void su(int n){
	bool f = true; 
	for (int i = 2;i < n;i++){
		if (n % i == 0){
			cout << i;
			f = false;
			break;
		}
	}
	if (f == true){
		cout <<"yes";
	}
}
int main(){
	int n;
	cin >> n;
	su(n);
	return 0;
}
