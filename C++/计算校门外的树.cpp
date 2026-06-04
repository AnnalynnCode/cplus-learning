#include<iostream>
using namespace std;
bool s[100001]; 
int main(){
	int l,m,k,k1;
	cin >> l >> m;
	for (int i = 1;i <= m;i++){
		cin >> k >> k1;
		for (int j = k;j <= k1;j++){
			s[j] = 1;
		}
	}
	int h = 0;
	for (int i = 0;i <= l;i++){
		if (s[i] == 0){
			h++;
		}
	}
	cout <<h;
	return 0;
}
