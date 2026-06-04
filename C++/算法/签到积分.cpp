#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >>s;
	int cnt = 0;
	int now = 0;
	for (int i = 0;i < s.size();i++){
		if (s[i] == 'N'){
			now = 0;
		}else{
			if (now == 5){
				now = 5;
			}else if (now < 5){
				now+=1;
			}
		}
		cnt+=now;
	}
	cout << cnt;
	return 0;
}
