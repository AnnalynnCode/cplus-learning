#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y){
	if (y == 0){
		return x;
	}
	return gcd(y,x % y);
}
int main(){
	int a,b,c;
	cin >> a>>b >> c;
	int maxv = max(a,max(b,c));
	int minv = min(a,min(b,c));
	cout << minv /  gcd(maxv,minv)<<"/"<<maxv / gcd(maxv,minv);	
	return 0;
}
