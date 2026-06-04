#include<iostream>
using namespace std;
int main(){
	string s,s1 = "";
	cin >> s;
	char a;
	cin >> a;
	for (int i = 0;i < s.length();i++){
		if (s[i] != a){
			s1 += s[i];
		}
	}
	cout << s1;
	return 0;
}
