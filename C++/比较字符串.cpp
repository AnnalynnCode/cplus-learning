#include<iostream>
#include<string>
using namespace std;
int main(){
	string a,b;
	cin >> a >> b;
	if (a.length() != b.length()){
		cout << "1";
	} else{
		if (a == b){
			cout <<"2";
		}else{
			for (int i = 0;i < a.length();i++){
				if (a[i] >= 'A' && a[i] <= 'Z'){
					a[i] += 32;
				}
			} 
			for (int i = 0;i < b.length();i++){
				if (b[i] >= 'A' && b[i] <= 'Z'){
					b[i] += 32;
				}
			} 
			if (a == b){
				cout <<"3";
			}else{
				cout << "4";
			}
		}
	}
	return 0; 
} 
