#include<iostream>
#include<cstdio>
using namespace std;
bool f(int a){
	for (int i = 2;i < a;i++){
		if (a % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin >> n;
	for (int i = 4;i <= n;i+=2){
		for (int j = 2;j <= i / 2;j++){
			if (f(j) == true && f(i - j) == true){
				printf("%d=%d+%d\n",i,j,i-j);	//cout << i << "=" << j <<"+"<<i-j <<endl;
			}
		}
	}
	return 0;
}
