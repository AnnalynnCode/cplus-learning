#include<iostream>
#include<string>
using namespace std;
int main(){
	string s,s1;
	while(cin >> s){
		if (s[0] >= 'a' && s[0] <= 'z'){
			s1+=s[0]-32;			
		}else{
			s1 += s[0];
		}		
	}
	cout << s1;
	return 0;
} 
