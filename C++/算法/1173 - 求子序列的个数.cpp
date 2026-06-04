#include<bits/stdc++.h>
using namespace std;
int main(){
	bool ud,ud_2;
	int n,g[15];
	int o = 1;
	cin >> n;
	for (int i = 0;i <n;i++){
		cin >> g[i];
	}
	if (g[0] > g[1]){
		ud = 1;
	}else{
		ud = 0;
	}
	for (int i = 0;i < n-1;i++){
		ud_2 = g[i] > g[i+1] ? 1 : 0;
		if (ud != ud_2){
			o++;
			ud = ud_2;
		}
	}
	cout << o;
	return 0;
}
