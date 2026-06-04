#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin  >>n;
	int a[10001];
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	int s = 0;
	for (int i = 0;i < n-1;i++){
		for (int j = 1;j < n-i;j++){
			if (a[j-1]>a[j]){
				swap(a[j-1],a[j]);
			}
			s++;
		}
	}
	cout <<s;
	return 0;
} 
