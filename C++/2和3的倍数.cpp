#include<iostream>
using namespace std;
int main(){
	int n,a[101],sum = 0;
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >>a[i];
	}
	for (int i = 0;i < n;i++){
		if (a[i] % 2 == 0 && a[i] % 3 == 0){
			sum++;
		}
	}
	cout << sum;
	return 0;
} 
