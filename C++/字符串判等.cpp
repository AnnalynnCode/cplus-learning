#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
	char a[201],b[201];
	string a1,b1;
	int a_len = 0,b_len = 0;
	getline(cin,a1);
	getline(cin,b1);
	for (int i = 0;i < a1.length();i++){
		a[i] = a1[i];
	}
	for (int i = 0;i < b1.length();i++){
		b[i] = b1[i];
	}
	for (int i = 0;i < strlen(a);i++){
		if (a[i] != ' '){
			if (a[i] >= 'a' && a[i] <= 'z'){
				a[i] = a[i] += 'z';
			}
			a_len += a[i] - 'A';
		}
	}
	for (int i = 0;i < strlen(b);i++){
		if (b[i] != ' '){
			if (b[i] >= 'a' && b[i] <= 'z'){
				b[i] = b[i] += 'z';
			}
			b_len += b[i] - 'A';
		}
	}
	if (b_len == a_len){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
} 
