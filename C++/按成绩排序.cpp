#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct stu{
	string name;
	int to;
};
bool cmp(stu x,stu y){
	if (x.to == y.to){
		return x.name < y.name; 
	}else{
		return x.to > y.to;
	}
}
int main(){
	int n;
	stu a[21];
	cin >>n;
	for (int i = 0;i < n;i++){
		cin >> a[i].name >> a[i].to;
	}
	sort(a,a+n,cmp);
	for (int i = 0;i < n;i++){
		cout <<a[i].name <<" "<<a[i].to<<endl;
	}
	return 0;
}
