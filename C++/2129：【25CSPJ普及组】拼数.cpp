#include<bits/stdc++.h>
using namespace std;
bool cmp(char a,char b){
	return a > b;
}
int main(){
	string s;
	cin >> s;
	char d[1000000];
	int j = 0;
	for (int i = 0;i < s.size();i++){
		if (s[i] >= '0' && s[i] <= '9'){
			d[j] = s[i];
			j++;
		}
	}
	sort(d,d+j,cmp);
	cout << d;
	return 0;
} 
