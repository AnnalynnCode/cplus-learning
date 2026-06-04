#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin >>s;
	for (int i = 0;i < s.length();i++){
		if (s[i] == 'a' || s[i] == 'o' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u'){
			cout << i+1;
			return 0;
	    }
	}
	cout << '0';
	return 0;
}

