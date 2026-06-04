#include<iostream>
#include<string>
using namespace std;
int main(){
	string s,s1,s2 = "";
	cin >>s>>s1;
	for (int i = 0;i < s.length();i++){
		if (s2.find(s[i]) == -1){
			s2 += s[i];
		}
	}
	for (int i = 0;i < s1.length();i++){
		if (s2.find(s1[i]) == -1){
			s2 += s1[i];
		}
	}
	cout << s2;
	return 0;
} 
