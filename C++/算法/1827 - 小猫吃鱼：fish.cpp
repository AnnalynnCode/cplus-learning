#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,buy[101],save[101];
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >>buy[i]>>save[i];
	} 
	int minn = buy[0],total = 0;
	total += minn;
	for (int i = 1;i < n;i++){
		minn = min(buy[i],minn + save[i-1]);
		total += minn;
	}
	cout << total;
	return 0;
}
