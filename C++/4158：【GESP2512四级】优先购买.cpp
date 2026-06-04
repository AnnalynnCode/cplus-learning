#include<bits/stdc++.h>
using namespace std;
struct tap{
	string name;
	int p,v;
};
tap s[1005];
string f[1005];
bool cmp(tap x,tap y){
	if (x.v == y.v){
		if (x.p == y.p){
			return x.name < y.name;
		}else{
			return x.p < y.p;
		}
	}else{
		return x.v < y.v;
	}
}
bool cmp1(string x,string y){
	return x < y;
}
int main(){
	int m,n;
	cin >> m >> n;
	for (int i = 0;i < n;i++){
		cin >> s[i].name >> s[i].p >> s[i].v;
	}
	int k = 0;
	sort(s,s+n,cmp);
	for (int i = 0;i < n;i++){
		if (m - s[i].p >= 0){
			f[k] = s[i].name;
			k++;
			m -= s[i].p;
		}
	}
	sort(f,f+k,cmp1);
	for (int i = 0;i < k;i++){
		cout << f[i]<<endl;
	}
	return 0;
} 
