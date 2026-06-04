#include<bits/stdc++.h>
using namespace std;
long long work(string s){
	long long a = 0;
	for (int i = 0;i < s.size();i++){
		a = a * 10 + (s[i] - '0');
	}
	return a;
}
int main(){
	string s;
	cin >> s;
	cout << work(s);  
	return 0;
}
