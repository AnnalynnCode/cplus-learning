#include<iostream>
#include<string> 
using namespace std;
int main(){
	string a;
	string b;
	cin >> a >> b;
	string g,finish = "";
	cin >> g;
	while(a.length() < b.length()){
		a = "0"+a;
	}
	while(b.length() < a.length()){
		b = "0"+ b;
	}
	for (int i = 0;i < a.length();i++){
		if (g == "and"){
			if (a[i] == '1' && b[i] == '1'){
				finish += "1";
			}else{
				finish += "0";
			}
		}else if (g == "or"){
			if (a[i] == '1' || b[i] == '1'){
				finish += "1";
			}else{
				finish += "0";
			}
		}else if (g == "xor"){
			if (a[i] != b[i]){
				finish += "1";
			}else{
				finish += "0";
			}
		}
	}
	int start = 0;
	while(start < finish.length() && finish[start] == '0'){
		start++;
	}
	if (start == finish.length()){
		cout <<"0";
	}else{
		cout<<finish.substr(start);
	}
	return 0;
}
