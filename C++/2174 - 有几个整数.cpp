#include<bits/stdc++.h>
using namespace std;
int main(){	
	string s,a="";
	int c = 0;
	cin >> s;
	bool flag = 0;
	for (int i = 0;i < s.size();i++){
		if (s[i] >= '0' && s[i] <= '9'){
			if (flag == 0){
				c++;
				flag = 1;
			}
		}else{
			flag = 0;
		}
	}
	cout << c;
	return 0;
}
