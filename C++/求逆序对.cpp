#include<iostream>
using namespace std;
int main(){
	int n,a[100001];
	cin >>n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	int sum = 0;
	for (int i = 0;i < n - 1;i++){
		int ai = a[i];
		for (int j = 1;j < n;j++){
			if (ai > a[i+j]){
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}
