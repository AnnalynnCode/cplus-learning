#include<bits/stdc++.h>
using namespace std;
struct pe{
	int data;
	int e1,e2,e3,e4,e5; 
	double r;
};
bool cmp(pe x,pe y){
	return x.r > y.r;
}
int main(){
	int n;
	cin >>n;
	pe a[101];
	double s;
	for (int i = 0;i < n;i++){
		cin >> a[i].data >> a[i].e1>>a[i].e2>>a[i].e3>>a[i].e4>>a[i].e5;
		int t[5] = {a[i].e1 , a[i].e2 , a[i].e3 , a[i].e4 , a[i].e5};
		sort(t,t+5);
		s = (t[1]+t[2]+t[3]) /3.0;
		a[i].r = s;
	}
	sort(a,a+n,cmp);
	for (int i = 0;i < 3;i++){
		cout << a[i].data <<" "<<fixed <<setprecision(3)<<a[i].r<<endl;
	}
	return 0;
}
