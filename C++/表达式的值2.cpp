#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main(){
	string s,num;
	cin >> s;
	int sum;
	char last_op = '+';
	for (int i = 0; i < s.length(); i++) {
        if (s[i] == '+' || s[i] == '-') {
            if (last_op == '+') {
                sum += atoi(num.c_str());
            } else {
                sum += atoi(num.c_str());
            }
            num = "";
            last_op = s[i];
        } else {
            num += s[i];
        }
    }
	if (last_op == '+'){
		sum += atoi(num.c_str());	
	}else{
		sum -= atoi(num.c_str());
	}
	cout << sum;
	return 0;
} 
