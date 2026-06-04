#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
	int n,a[101];
	cin >>n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	double ai;
	if (n % 2 == 0){
		ai = (a[n / 2]+a[n/2-1])/2.0;
	}else{
		ai = a[n/2-1];
	}
	cout<<fixed<<setprecision(1)<<ai;
	return 0;
}
