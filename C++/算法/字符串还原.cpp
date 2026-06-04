#include<bits/stdc++.h>
using namespace std;
int main(){
	string b,a;
	cin >>b;
	for(int i = 0;i < b.size();i++){
		if (i % 2 == 0 || i == b.size()-1){
			a += b[i];
		}
	} 
	cout << a;
	return 0;
} 
