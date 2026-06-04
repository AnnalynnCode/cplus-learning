#include<iostream>
using namespace std;
int num(int i,int n){
	n -= i;
	return n * n;
}
int main(){
	int n,sum = 0;
	cin >> n;
	for (int i = 0;i < n;i++){
		sum += num(i,n);
	}
	cout <<sum;
	return 0;
} 
