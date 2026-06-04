#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
} 
int main(){
	int n,s = 0,b;
	cin >> n>>b;
	int a[20005];
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}		
	sort(a,a+n,cmp);
	for (int i = 0;i < n;i++){
		s+=a[i];
		if (s>=b){
			cout << i+1;
			return 0;
		}
	}
	return 0;
}
