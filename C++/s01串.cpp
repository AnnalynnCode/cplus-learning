#include<iostream>
#include<string>
using namespace std;
int main(){
	string s = "0";
	int n;
	cin >> n;
	for (int i = 0;i < n;i++){
		string news = "";
		for (int j = 0;j < s.length();j++){
			if (s[j] == '0'){
				news += '1';
			}
			else if (s[j] == '1'){
				news += "01";
			}	
		}
		s = news;
	} 
	cout << s;
	return 0;
}

