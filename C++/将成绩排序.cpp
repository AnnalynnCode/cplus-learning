#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct stu{
	string name;
	int s;
};
bool cmp(stu x,stu y){
	if (x.s == y.s){
		return x.name < y.name;
	}else{
		return x.s > y.s;
	}
}
int main(){
	stu a[21];
	int k;
	cin >>k;
	for (int i = 0;i < k;i++){
		cin >>a[i].name>>a[i].s;
	}
	sort(a,a+k,cmp);
	for (int i = 0;i < k;i++){
		cout <<a[i].name <<" "<<a[i].s<<endl;
	}
}
