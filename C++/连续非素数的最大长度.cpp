#include<bits/stdc++.h>
using namespace std;
bool gcd(int v){
	for (int i = 2;i <= sqrt(v);i++){
		if (v % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin >> n;
	int sum = 0,num = 0;
	for (int i = 1;i <= n;i++){
		if (gcd(i) == false){
			sum++;
		}else{
			if (num > sum){
				sum = 0;
			}else{
				num = sum;
				sum = 0;
			}
		} 
	} 
	cout << num;
	return 0;
} 
