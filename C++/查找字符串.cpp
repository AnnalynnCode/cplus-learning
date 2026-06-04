#include<iostream>
#include<string>
using namespace std;
int main(){
	string a,b;
	getline(cin,a);
	cin >> b; 
	int p = a.find(b);
	if (p == -1){
		cout <<-1;
	}else{
		while(p != -1){
			cout << p+1 << endl;
			p++;
			p = a.find(b,p);
		}
	}
	return 0;
}
