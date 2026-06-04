#include<iostream>
using namespace std;
int main(){
	int n,k;
	int a[101];
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	cin >> k;
	cout << a[k];
}
