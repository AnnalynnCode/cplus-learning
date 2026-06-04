#include<iostream> 
#include<string>
using namespace std;
int main(){
	string s1,s2;
	cin >> s1 >> s2;
	if (s1 == s2){
		cout << '0';
	}else{
		string s = s1;
		if (s1 > s2){
			s = s1;
		}else if (s1 < s2){
			s = s2;
		}
		for (int i = 0;i < s.length();i++){
			if (s1[i] != s2[i]){
				cout << s1[i] - s2[i];
				return 0;
			}
		}
	}
	return 0; 
}
