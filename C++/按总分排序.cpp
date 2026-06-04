#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct stu{
	string name;
	int yuwen,shuxue,zongfen;
};
bool cmp(stu x,stu y){
	return x.zongfen > y.zongfen;
}
int main(){
	stu a[101];
	int n;
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i].name>>a[i].yuwen>>a[i].shuxue;
		a[i].zongfen = a[i].shuxue + a[i].yuwen;
	}
	sort(a,a+n,cmp);
	for (int i = 0;i < n;i++){
		cout << a[i].name<<" "<<a[i].yuwen<<" "<<a[i].shuxue<<" "<<a[i].zongfen<<endl;
	}
	return 0;
}
