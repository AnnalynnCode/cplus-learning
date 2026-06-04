#include<iostream>
#include<string>
using namespace std;
int main(){
	string s = "book",s1;
	getline (cin,s1);
	int n = s1.find("ruler");	
	while(n != -1){
		s1 = s1.replace(n,5,s);	
		n = s1.find("ruler",n+1);
	}
	cout << s1;
	return 0;
} 
