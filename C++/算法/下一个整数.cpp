#include<bits/stdc++.h>
using namespace std;
int d[10];
bool check(int x){
	while(x){
		d[x%10]++;
		x /= 10;
	} 
	for (int i = 0;i < 10;i++){
		if (d[i] > 1){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin >> n;
	for (int c = n+1;c <= 9999;c++){
		if (check(c)){
			cout << c;
			return 0; 
		}
	}
}
