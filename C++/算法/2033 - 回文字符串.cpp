#include<bits/stdc++.h>
using namespace std;
int tong[128];
bool check(string s){
	int cnt = 0;
	memset(tong,0,sizeof(tong));
	for (int i = 0;i < s.size();i++){
		tong[s[i]]++;
	}
	for (int i = 0;i < 128;i++){
		if (tong[i] % 2){
			cnt++;
		}
	}
	return cnt <= 1;
}
int main(){
	int n;
	string s[1005];
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> s[i];
		if (check(s[i]) == 1){
			cout << "Yes";
		}else{
			cout << "No";
		}
		cout<<endl;
	}
	return 0;
}
