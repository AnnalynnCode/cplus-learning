#include<iostream>
using namespace std;
int f(int x){
	if (x == 1){
		return 1;
	}
	else{
		return x + f(x - 1);
	}
}
int main(){
	int x;
	cin >>x;
	cout << f(x);
	return 0;
}
