#include<bits/stdc++.h>
using namespace std;
int a[65];
int yue[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
int main(){
	freopen("spell.in","r",stdin);
	freopen("spell.out","w",stdout);
	int n;
	int m,d,day=0;
	int k;
	cin >>n >> m >>d >> k;
	for (int i = 1;i < m;i++){
		day += yue[i];
	}
	day += d;
	if (day == 1){
		if (k > 12)cout << "NO ANSWEr!";
		else cout << k;
		return 0;
	}
	for (int i = 1;i <= day;i++){
		cin >> a[i];
	}
	int zhoushu = day % 7 == 0 ? 7 : day % 7;
	int total = 0;
	for (int i = 1;i <= day;i++){
		total += a[i];
	}
	int start = ((1+total) % n == 0 ? n : (1 + total) % n);
	int end = ((12+total)%n == 0 ? n : (12+total) % n);
	if ((k > end && end > start) || (k < start && end > start) || (k > end && k < start)){
		cout <<"NO ANSWEr!";
	}else{
		if (k >= start){
			cout <<1 + (k - start);
		}else{
			cout << 1 + (n - start) + k;
		}
	}
	return 0;
}
