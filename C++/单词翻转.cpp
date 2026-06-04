#include<iostream>
#include<string>
using namespace std;
int main(){
	string in,w;
	getline(cin,in);
	in += ' ';
	for (int i = 0;i < in.length();i++){
		if (in[i] == ' '){
			for (int j = (w.length()-1);j >= 0;j--){
				cout << w[j];
			}
			w = "";	
			if (i != in.length()){
				cout << ' ';
			}
		}
		else{
			w += in[i];
		}
	}
	return 0;
}
