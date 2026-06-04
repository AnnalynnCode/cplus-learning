#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,m;
	cin >> n >>x >> m;
	int k = (x + m - 1) % n;
	if (k == 0) cout << n;
	else cout << k;
	return 0;
}
