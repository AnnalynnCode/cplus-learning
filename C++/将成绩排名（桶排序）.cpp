#include<iostream>
using namespace std;
int main(){
	int n;
	int a[41],b[6] = {0};
	cin >>n;
	for (int i = 0;i < n;i++){
		cin >>a[i];
		b[a[i]]++;
	}
	for (int i = 5;i > 0;i--){
			while(b[i]){
				cout << i<<" ";
				b[i]--;
			}
	}
	return 0;
}
