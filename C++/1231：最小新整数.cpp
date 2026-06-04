#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	int t,s;
	cin >>t;
	for (int i = 0;i < t;i++){
		cin >>n >> s;
		while(s--){
			for (int i = 0;i < n.size();i++){
				if (n[i] > n[i+1]){
					n.erase(i,1);
					break;
				}
			}
		}
		bool flag = 0;
		for (int i = 0;i < n.size();i++){
			if (n[i] == '0'){
				if (flag){
					cout << n[i];
				}
			}else{
				cout << n[i];
				flag = 1;
			}
		}
		cout << endl;
	}
	
	return 0;
} 
