#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int n;
	string a[11];
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n) ;
	for (int i = 0;i<n;i++){
		cout << a[i] <<" ";
	}
	return 0;
} 
