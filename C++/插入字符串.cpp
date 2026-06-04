#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1,s2;
	int p;
	cin >> s2 >>s1 >> p;
	s1 = s1.insert(p,s2);
	cout << s1;
	return 0;
} 
