#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> m;
		int a[102],num = 0;
		for (int j = 0;j < m;j++){
			cin >> a[j];
			a[j] = a[j] / 2 + 1;
		}
		sort(a,a+m);
		for (int j = 0;j < m / 2 + 1;j++){
			num += a[j];
		}
		cout <<num<<endl;
	}	
	return 0;
}
