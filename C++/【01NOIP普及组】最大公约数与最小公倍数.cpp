#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y){
	if (y == 0){
		return x;
	}else{
		return gcd(y,x % y);
	}
}
int main(){
	int x,y,p,q,sum = 0;
	cin >> x >>y;
	int u = x*y;
	for (p = x;p <= y;p++){
		if (u % p == 0){
			q = u / p;
			if (gcd(max(p,q),min(p,q)) == x){
				sum++;
			}
		}
		
	}
	cout << sum;
	return 0;
}
