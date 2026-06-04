#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,sum = 0;
	char c;
	cin >> a;
	sum+=a;
	while(cin >> c >>a){
		if (c == '+')sum+=a;
		else if (c == '-')sum -= a;
	}
	cout << sum;
	return 0;
}
