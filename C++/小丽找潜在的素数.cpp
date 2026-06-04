#include<bits/stdc++.h>
using namespace std;
bool sushu(int n){
	if(n <= 1){
		return false;
	}
	if (n == 2){
		return true;
	}
	if (n % 2 == 0){
		return false;
	}
	for (int i = 3;i <= sqrt(n);i+=2){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}
int zhuanhuan(string s){
	int u = 1;
	int y = 0;
	for (int i = s.size() - 1;i >= 0;i--){
		if (s[i] == '1'){
			y += u;	
		}
		u*=2;
	}
	return y;
}
int main(){
	int n,num = 0;
	cin >>n;
	string s[101];
	for (int i = 0;i < n;i++){
		cin >> s[i];
		if (sushu(zhuanhuan(s[i])) == true){
			num++;
		}
	}
	cout << num;
    return 0;
}

