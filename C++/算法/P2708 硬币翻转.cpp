#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int cnt;
	for (int i = 1;i < s.size();i++){//从第二个字符开始 
		if (s[i] != s[i-1])cnt++;
	}
	if (s[s.size()-1] == '0'){
		cnt++;
	}
	cout << cnt;
	return 0;
}
