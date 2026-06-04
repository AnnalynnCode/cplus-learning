#include<bits/stdc++.h>
using namespace std;
struct stu{
	int to;
	int score;
	int v1,v2,v3;
};
bool cmp(stu x,stu y){
	if (x.score == y.score){
		if(x.v1 == y.v1) {
			return x.to < y.to;
		}
		return x.v1 > y.v1;
	} 
	return x.score > y.score;
}
int main(){
	int n;
	cin >>n;
	stu a[301];
	for (int i = 0;i < n;i++){
		cin >> a[i].v1 >> a[i].v2 >> a[i].v3;
		a[i].score = a[i].v1 + a[i].v2 + a[i].v3;
		a[i].to = i+1; 
	}
	sort(a,a+n,cmp);
	for (int i = 0;i < 5;i++){
		cout <<a[i].to << " "<<a[i].score<<endl;
	}
	return 0;
}
