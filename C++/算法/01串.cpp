#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		cin >> s;
		bool f = 1;
		for (int i = 0;i < n;i++){
			if (s[i] == '1'){
				if (s[i+1] == '1' || s[i-1] == '1'){
					cout << "No"<<endl;
					f = 0;
					break;
				} 
			}else if (s[i] == '0'){
				if (s[i+1] != '1' && s[i-1] != '1'){
					cout << "No"<<endl;
					f = 0;
					break;
				}
			}
		}	
		if (f == 1){
			cout << "Yes"<<endl;
		}
	}
	return 0;
} 
