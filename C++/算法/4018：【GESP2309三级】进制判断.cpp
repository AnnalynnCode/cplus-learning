#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s;
	cin >> n;
	while(n--){
		cin >> s;
		int f2 = 1,f8 = 1,f10  = 1,f16 = 1;
		for (int i = 0;i < s.size();i++){
			if (s[i] >= '0' && s[i] <= '9'){
				if (s[i] >= '8'){
					f2 = f8 = 0;
				}
				if (s[i] >= '2'){
					f2 = 0;
				}	
			}else if (s[i] >= 'A' && s[i] <= 'F'){
				f2 = f8 = f10 = 0;
			}else{
				f2 = f8 = f10 = f16 = 0;
			}
		}
		cout <<f2<<" "<<f8<<" "<<f10 << " "<<f16<<endl;
	}
	return 0;
} 
