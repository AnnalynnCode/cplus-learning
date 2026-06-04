#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
	int n;
	double a[101];
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	for (int i = 0;i < n-1;i++){
		int k = i;
		for (int j = i+1;j < n;j++){
			if (a[k] < a[j]){
				k = j;
			}
		}
		swap(a[k],a[i]);
	}
	double num = a[0]+a[1]+a[2]+a[3]+a[4];
	num /= 5;
	cout << fixed <<setprecision(1)<<num;
	return 0;
}
