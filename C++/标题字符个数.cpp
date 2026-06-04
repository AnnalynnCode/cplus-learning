#include<iostream>
#include<string>
using namespace std;
int main(){
	string s = " ";
	int n = 0;
	getline(cin,s);
	for (int i = 0;i < s.length();i++){
		if (s[i] != ' ' && s[i] != '\n'){
			n++;
		}
	}
	cout << n;
	return 0;
}
