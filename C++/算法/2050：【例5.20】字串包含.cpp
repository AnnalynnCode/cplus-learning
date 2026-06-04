#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2,s;
	string longs;
	string shorts;
	cin >>s1 >>s2;
	if (s1.size() >= s2.size()){
		longs = s1;
		shorts = s2;
	}else{
		longs = s2;
		shorts = s1; 
	}
	for (int i = 0;i < s1.size();i++){
		s = longs.substr(i) + longs.substr(0,i);
		if (s.find(shorts) != -1){
			cout << "true";
			return 0;
		}
	}
	cout << "false";
	return 0;
}
