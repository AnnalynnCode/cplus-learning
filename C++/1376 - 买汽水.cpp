#include<bits/stdc++.h>
using namespace std;
int main(){	
	int n,m;
	cin >> n >>m;
	n = m / n;
	int cnt = n;
	while(n >= 2){
		int r = n%2;
		n /= 2;
		cnt+=n;
		n+=r;
	}
	cout << cnt;
	return 0;
} 
