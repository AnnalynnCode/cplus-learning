#include<iostream>
#include<string>
using namespace std;
int main(){
	string s,s1;
	cin >> s;
	for (int i = 0;i < s.length();i++){
		if (i == (s.length() - 1)){
			s1 += s[0] + s[i];
		}else{
			s1 += s[i] + s[i+1];
		}
	}
	cout << s1;
	return 0;
}
