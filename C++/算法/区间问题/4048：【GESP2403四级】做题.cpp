#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long a[1000005];
	cin >> n;
	for (int i = 0;i < n;i++) cin >> a[i];
	sort(a,a+n);
	int cnt = 0;
	for (int i = 0;i < n;i++){
		if (a[i] >= cnt+1){
			cnt++;
		}else {
			continue;
		}
	}
	cout << cnt;
	return 0;
}
