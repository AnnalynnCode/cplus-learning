#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1,s2,s;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s);
	int p = s1.find(s2);
	while(p != -1){
		s1 = s1.replace(p,s2.length(),s);
		p = s1.find(s2,p+1);
	}
	cout <<s1;
	return 0;
} 
