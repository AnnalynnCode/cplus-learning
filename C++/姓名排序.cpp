#include<bits/stdc++.h>
using namespace std;
struct stu{
	string name;
	int to;
};
bool cmp(stu x,stu y){
	if ((x.name).size() == (y.name).size()){
		if (x.name == y.name){
			return x.to > y.to;
		}
		return x.name > y.name;
	}
	return (x.name).size() > (y.name).size();
}
int main(){
	int n;
	cin >> n;
	stu a[101];
	for(int i = 0;i < n;i++){
		cin >> a[i].to >> a[i].name;
	}
	sort(a,a+n,cmp);
	for(int i = 0;i < n;i++){
		cout << a[i].to <<" "<< a[i].name<<endl;
	}
	return 0;
}
