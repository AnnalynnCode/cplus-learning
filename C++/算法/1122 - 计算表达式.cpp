#include<bits/stdc++.h>
using namespace std;
int main(){
	char c;
	int a;
	cin >> a;
	int num = a;
	while(cin >> c >> a){
		if (c == '+'){
			num += a;
		}else if (c == '-'){
			num -= a;
		}else if (c == '*'){
			num *= a;
		}
	}
	cout << num;
	return 0;
}
