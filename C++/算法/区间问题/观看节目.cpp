#include<bits/stdc++.h>
using namespace std;
struct jiemu{
	int s,t;//开始时间和结束时间 
};
bool cmp(jiemu x,jiemu y){
	return x.t < y.t;
}
int main(){
	jiemu a[200005];
	int n;
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i].s >> a[i].t;
	}
	sort (a,a+n,cmp);
	int cnt = 0,last = -1;
	for (int i = 0;i < n;i++){
		if (a[i].s >= last){
			last = a[i].t;
			cnt++;
		} 
	}
	cout << cnt;
	return 0;
}
