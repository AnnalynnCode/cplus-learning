#include<bits/stdc++.h>
using namespace std;
int gcd(int v1,int v2){
	if (v2 == 0){
		return v1;
	}else{
		return gcd(v2,v1 % v2);
	}
}
int main(){
	int n;
	cin >>n;
	int chushi;
	cin >> chushi;
	for (int i = 1;i < n;i++){
		int sum;
		cin >> sum;
		chushi = gcd(max(chushi,sum),min(chushi,sum));
	}
	cout <<  chushi;
	return 0;
} 
