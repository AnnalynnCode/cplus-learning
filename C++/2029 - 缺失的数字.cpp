#include<bits/stdc++.h>
using namespace std;
bool a[1000005];
int main(){	
	int n;
	cin >> n;
	for (int i = 1;i <= n - 2;i++){
		int y;
		cin >> y;
		a[y] = 1;
	}
	for (int i = 1;i <= n;i++){
		if (a[i] == 0){
			cout << i << " ";
		}
	}
	return 0;
} 
