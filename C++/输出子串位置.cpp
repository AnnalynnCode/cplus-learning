#include<iostream>
#include<string>
using namespace std;
int main(){
	string fu,zi;
	getline (cin , fu);
	getline(cin,zi)
	int p = fu.find(zi);
	if (p == -1){
		cout << "-1";
		return 0;
	}else{
		p = fu.find(zi);
		while (p != -1){
			cout << p+1 << endl;
			p = fu.find(zi,p+1);
		}
	}
	return 0;
} 
