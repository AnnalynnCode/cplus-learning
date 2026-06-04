#include<bits/stdc++.h>
using namespace std;
struct stu{
	int s;
	int k;
};
bool cmp(stu v1,stu v2){
	if (v1.s == v2.s){
		return v1.k < v2.k;
	}else{
		return v1.s > v2.s;
	}	
}
int main(){
	int n,m,i = 0;
	cin >>n >>m;
	stu a[5001];
	for (int i = 0;i < n;i++){
		cin >> a[i].k >>a[i].s;
	}
	sort (a,a+n,cmp);
	double y = m*1.5;
	int y1 = (int)(y);
	int gong = 0,fen = a[y1 - 1].s;
	for (int i = 0;i < n;i++){
		if (a[i].s < fen){
			break;
		}else{
			gong++;
		}
	}
	cout << fen <<" "<<gong<<endl;
	for (int j = 0;j < gong;j++ ){
		cout <<a[j].k <<" "<<a[j].s<<endl;
	}
	return 0;
}
