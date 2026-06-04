#include<iostream>
#include<string>
using namespace std;
int main(){
	string s,out_s;
	char n;
	cin >> s;
	cin >> n;
	for (int i = 0;i < s.length();i++){
		if (s[i] != n){
			out_s += s[i];
		}
	}
	cout << out_s;
	return 0;
}
