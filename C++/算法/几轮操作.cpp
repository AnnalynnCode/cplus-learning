#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b;
	cin >> a >>b;
	if (a == b){
		cout << 1;
		return 0;
	}
	long long sum = 0;
	while(a&&b){
		if (a < b){
			swap(a,b);
		}
		sum += a / b;
		a %= b;
	}
	cout << sum;
	return 0;
}
