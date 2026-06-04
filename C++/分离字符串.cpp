#include<iostream>
#include<string>
using namespace std;
int main(){
	string n,bi;
	cin >> n;
	for (int i = n.length();i > 0;i--){
		if (n[i] >= 'A' && n[i] <= 'Z'){
			bi += n[i];
		}
	}
	for (int i = 0;i < n.length();i++){
		if (n[i] >= 'a' && n[i] <= 'z'){
			bi += n[i];
		}
	}
	cout <<bi;
	return 0; 
} 
