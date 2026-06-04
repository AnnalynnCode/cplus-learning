#include<bits/stdc++.h>
using namespace std;
int siwei(string s){
	int len = s.size();
	int v = (s[len - 1] - '0')*1;
	if (s.size() >= 2){
		v += (s[len - 2] - '0') * 10;
	}
	if (s.size() >= 3){
		v += (s[len - 3] - '0') * 100;	
	}
	if (s.size() >= 4){
		v += (s[len - 4] - '0') * 1000;
	}
	return v;
}
int mi(int v_2011,int s,int v_10000){
	int ans = 1;
	while(s){
		if (s & 1){
			ans = ans * v_2011 % v_10000;
		}
		v_2011 = v_2011 * v_2011 % v_10000;
		s >>= 1;
	}
	return ans;
}
int main(){
	string s;
	int v_2011 = 2011,v_10000 = 10000;
	int k;
	int n[205];
	cin >>k;
	for (int i = 0;i < k;i++){
		cin >> s;
		n[i] = mi(v_2011,siwei(s),v_10000);
	}	
	for (int i = 0;i < k;i++){
		cout << n[i]<<endl;
	}	
	return 0;
} 
