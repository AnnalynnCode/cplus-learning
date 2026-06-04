#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int n;
	cin >> n;
	while(n){
		s += (n % 2 + '0');
		n /= 2;
	}
	for (int i = s.size() - 1;i >= 0;i--){
		cout<< s[i];
	}
	return 0;
}
