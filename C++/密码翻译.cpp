#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	string b = "";
	for (int i = 0;i < a.length();i++){
		if (a[i] == 'z'){
			b += 'a';
		}
		else if (a[i] == 'Z'){
			b += 'A';
		}
		else if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z'){
			b += a[i]+1;
		}
		else{
			b += a[i];
		}
	}
	cout << b;
	return 0;
} 
