#include<bits/stdc++.h>
using namespace std;
string work(long long s){
	string t;
	while(s){
		t += s % 10 + '0';
		s /= 10;
	}
	reverse(t.begin(),t.end());
	return t;
}
int main(){
	long long s;
	cin >> s;
	cout << work(s);  
	return 0;
}
