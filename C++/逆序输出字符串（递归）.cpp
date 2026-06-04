#include<iostream>
#include<string> 
using namespace std;
string s;
void f(int i){
	if (s[i] == '!'){
		return;
	}else{
		f(i+1);
	}
	cout << s[i];
}
int main(){
	
	cin >> s;
	f(0);
	return 0;
}
