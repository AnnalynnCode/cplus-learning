#include<iostream>
using namespace std;
int factor(int i){
	int num = 0;
	for (int j = 1;j < i;j++){
		if (i % j == 0){
			num += j;
		}
	}
	return num;
}
int main(){
	int n;
	cin >> n;
	for (int i = 2;i <= n;i++){
		if (factor(i) == i){
			cout << i << endl;
		}
	}
	return 0;
}
