#include<iostream>
using namespace std;
int main(){
	int n,a[101],s = 0;
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	for (int i = 0;i < n;i++){
		for (int j = 0;j < n - i - 1;j++){
			if (a[j+1]  > a[j]){
				s = a[j+1];
				a[j+1] = a[j];
				a[j] = s; 
			}
		} 
	}
	for (int i = 0;i < n;i++){
		cout <<a[i]<<" ";
	}
	return 0;
} 
