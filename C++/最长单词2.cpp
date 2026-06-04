#include<iostream>
#include<string>
using namespace std;
int main(){
	string s,max_s;
	int max = 0;
	do{
		if (s[s.length() - 1] == '.'){
        	if (s.length()-1 > max){
				
				max = s.length();
			}
		}else{
			if (s.length() > max){
				max_s = s;
				max = s.length();
			}
		}
	}while(cin >> s);
	
	cout<<max_s;
	return 0;
} 
