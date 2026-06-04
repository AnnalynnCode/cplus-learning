#include<bits/stdc++.h>
using namespace std;
struct stu{
	int num,t;
};
bool cmp(stu x,stu y){
	if (x.t == y.t){
		return x.num < y.num;
	}else{
		return x.t< y.t;
	}
}
int main(){
	int n;
	cin >> n;
	double d = 0;
	stu a[1001];
	for (int i = 1;i <= n;i++){
		cin >> a[i].t;
		a[i].num = i;
	}
	sort(a+1,a+1+n,cmp);
	for (int i = 1;i <= n;i++){
		cout << a[i].num<<" ";
		d += (n - i)* a[i].t;
	}
	d = d / n;
	cout <<endl<<fixed<<setprecision(2)<< d;
	return 0;
}
