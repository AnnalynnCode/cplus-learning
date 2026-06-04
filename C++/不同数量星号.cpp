#include<iostream>
using namespace std;
void out(int n){
	for (int i = 1;i <= n;i++){
		cout << '*';
	}
	cout <<endl;
}
int main(){
	int n = 3;
	for (int i = 1;i <= 3;i++){
		out(n);
		n += 2;
	}
	return 0;
}
