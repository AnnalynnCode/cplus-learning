#include<iostream>
using namespace std;
int main(){
	int n,num = 1,s = 0;
	cin >>n;
	for (int i = 1;i <= n;i++){
		num = num % 1000000 * i;
		s= s % 1000000 + num % 1000000;
	}
	cout << s % 1000000;
	return 0;
} 

