#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a = 0,b = 0;
	string s;
	getline (cin,s);
	bool flag =  0;
	for (int i = 0;i < s.size();i++){
		if (s[i] >= '0' && s[i] <= '9'){
			if (flag == 0){
				a = a * 10 +s[i] - '0';
			}else{
				b = b * 10 + s[i] - '0';
			}
		}else if (s[i] == '+'){
			flag = 1;
		}
	}
	if (a+b <= 100000000){
		cout << a+b;
	}else{
		cout << "Large";
	}
	return 0;
}
