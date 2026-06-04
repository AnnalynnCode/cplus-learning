#include<bits/stdc++.h>
using namespace std;
int main(){
	long long N;
	cin >> N;
	long long n = N;
	if (n == 1){
		cout << "1=1";
		return 0;
	}
	cout <<n<<"=";
	bool c = true;
	for (long long i = 2;i*i <= n;i++){
		int score = 0;
		if (n % i == 0){
			while(n % i == 0){
				score++; 
				n /= i;
			}	
		}else{
			continue;
		}
		if (c == false){
			cout << "*";
		}
		cout << i;
		if (score > 1){
			cout <<"^"<<score;
		}
		
		c = false;
	}
	if (n > 1){
		if (c==false){
			cout << "*";
		}
		cout << n;
	}
	return 0;
} 
