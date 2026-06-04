#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	bool tf = true;
	cin >> a;
	int first = 0,finish = a.length() - 1;
	for (int i = 0;i < a.length();i++){
		if (a[i] != '*' && tf != false){
			tf = false;
			first = i;
		}
		if (a[i] == '*' && tf == true){
			b[i] = a[i];
		}
	}
	tf = true;
	for (int i = a.length() - 1;i >= 0;i--){
		if (a[i] != '*' && tf != false){
			tf = false;
			finish = i;
		}
		if (a[i] == '*' && tf == true){
			b[i] = a[i];
		}
	}
	for (int i = first;i < finish;i++){
		if (a[i] != '*'){
			b[i] = a[i];
		}
		else{
			b[i] == ' ';
		}
	}
	for (int i = 0;i < a.length();i++){
		if (b[i] != ' '){
			cout << b[i];
		}
	}
	return 0;
}
