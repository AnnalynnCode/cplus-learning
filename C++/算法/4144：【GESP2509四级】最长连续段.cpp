#include<bits/stdc++.h>
using namespace std;
int a[100005]; 
int main(){
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	sort(a+1,a+1+n);
	int t = unique(a+1,a+1+n) - (a+1);
	int y = 1,c = 0;
	for (int i = 2;i <= t;i++){
		if (a[i - 1] + 1 == a[i]){
			y++;
		}else{
			c = max(c,y);
			y = 1;
		}
	}
	c = max(c,y);
	cout << c;
	return 0;
}
