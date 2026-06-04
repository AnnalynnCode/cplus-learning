#include<bits/stdc++.h>
using namespace std;
string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main(){
	int n;
	cin >> n;
	if (n % 26 == 0){
		cout << s;
		return 0;
	}
	if (n > 26){
		n -= 26;
	}
	for(int i = 0;i < 26;i++){
		if (n + s[i] > 'A' + 25){
			s[i] += n;
			s[i] -= 26;
		}else{
			s[i] += n;
		}
	} 
	cout << s;
	return 0;
} 
