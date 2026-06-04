#include<bits/stdc++.h>
using namespace std;
int main(){
	double d;
	int n,a[101];
	cin >>n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort (a,a+n);
	if (n % 2 == 0){
		d = (a[n/2]+a[n/2-1])/2.0;
	}else{
		d = a[n/2];
	}
	cout <<fixed<<setprecision(1)<<d;
	return 0;
}
