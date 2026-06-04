#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin >> a >>b;
	int cnt = 0;
	for (int i = 0;i < a.size()-1;i++){
		if (a[i] != b[i]){
			cnt ++;
			if (a[i] == '*'){
				a[i] = 'o';
			}else{
				a[i] = '*'; 
			}
			if (a[i+1] == '*'){
				a[i+1] = 'o';
			}else{
				a[i+1] = '*'; 
			}
		}
	}
	cout << cnt;
	return 0;
}
