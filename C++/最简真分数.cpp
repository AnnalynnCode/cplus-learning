#include<bits/stdc++.h>
using namespace std;
int gcd(int v1,int v2){
	if (v2 == 0){
		return v1;
	}else{
		return gcd(v2,v1 % v2);
	}
}
int main(){
	int n,a[601],num = 0;
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	for (int i = 0;i < n;i++){
		for (int j = i+1;j < n;j++){
			if (gcd(a[j],a[i]) == 1){
				num++;
			}
		}
	}
	cout << num;
	return 0;
} 
