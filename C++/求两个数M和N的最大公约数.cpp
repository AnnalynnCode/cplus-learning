#include<bits/stdc++.h>
using namespace std;
long long gcd(long long m,long long n){
	while(m % n != 0){
		long long t = m % n;
		m = n;
		n = t;
	}
	return n;
}
int main(){
	long long m,n;
	cin >> m >>n;
	cout << gcd(m,n);
	return 0;
}
