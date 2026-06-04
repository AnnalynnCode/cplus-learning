#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[101];
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	double z;
	if (n % 2 == 0){
		z = (a[n/2] + a[n/2-1])/2.0;
		cout <<fixed<<setprecision(1)<< z;
	}else{
		cout << a[n/2];
	}
	return 0;
} 
