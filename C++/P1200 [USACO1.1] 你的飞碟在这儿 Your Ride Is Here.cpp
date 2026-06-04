#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	int av = 1,bv = 1;
	cin >> a >>b;
	for (int i = 0;i < a.size();i++){
		av *= a[i] - 'A' + 1;
	}
	for (int i = 0;i < b.size();i++){
		bv *= b[i] - 'A' + 1;
	}
	if (av % 47 == bv % 47){
		cout << "GO";
	}else{
		cout <<"STAY";
	}
	return 0;
} 
