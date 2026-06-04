#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[100005];
	int n,count = 0;
	cin >> n;
	cin >> a;
	for (int i = 0;i < n;i++){
		if (a[i] >= 'a' && a[i] <= 'z'){
			count += a[i] - 'a' + 1;
		}else{
			count -= a[i];
		}
	}
	cout << count;
	return 0;
} 
