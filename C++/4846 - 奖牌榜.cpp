#include<bits/stdc++.h>
using namespace std;
struct school{
	int to,s;
};
bool cmp(school v1,school v2){
	if (v1.s == v2.s){
		return v1.to < v2.to;
	}else{
		return v1.s > v2.s;
	}
}
int main(){
	int n;
	cin >> n;
	school d[10005];
	for (int i = 0;i < n;i++){
		cin >> d[i].to >> d[i].s;
	}
	sort(d,d+n,cmp);
	for (int i = 0;i < n;i++){
		cout <<d[i].to << " "<< d[i].s<<endl;
	}
	return 0;
} 
