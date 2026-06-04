#include<bits/stdc++.h>
using namespace std;
string er(int y){
	string s;
	while(y){
		int u = y%2;
		s += char(u) - '0';
		y /= 2;
	}
	return s;
}
bool huiwen(string y){
	string x = y,z = "";
	for (int i = y.size()-1;i >= 0;i--){
		z += y[i];
	}
	if (z == x){
		return true;
	}else{
		return false;
	}
}
int main(){
	int n,sum = 0;
	cin >>n;
	for (int i = 1;i <= n;i++){
		string d = er(i);
		if (huiwen(d)  == true){
			sum++;
		}
	}
	cout <<sum;
	return 0;
} 
