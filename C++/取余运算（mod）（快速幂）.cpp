#include<bits/stdc++.h>
using namespace std;
long long mi(long long b,long long p,long long k){
	long long ans = 1;
	while(p){
		if (p & 1){
			ans = ans * b % k;
		}
		b = b*b % k;
		p >>= 1;
	}
	return ans;
}
int main(){
	long long b,p,k;
	cin >> b >> p >>k;
	cout << b<<"^"<<p<<" "<<"mod"<<" "<<k<<"="<<mi(b,p,k);
	return 0;
} 
