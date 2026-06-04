#include<iostream>
#include<string>
using namespace std;
int main(){
	string w,out;
	char a,b;
	getline(cin,w);
	cin >> a >> b;
	for (int i = 0;i < w.length();i++)
	{
		if (w[i] == a){
			out += b;
		}
		else{
			out += w[i];
		}
	}
	cout << out;
	return 0;
} 
