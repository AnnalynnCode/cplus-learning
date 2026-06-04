#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >>s;
    string s1;
    for (int i = 0;i < s.size() - 1;i++){
        s1 += s[i] + s[i+1];
    }
    s1 += s[s.size() - 1] + s[0];
    cout << s1;
	return 0;
} 
