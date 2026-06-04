#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct stu{
	string name;
	int total;
};
bool cmp(stu x,stu y){
	if (x.total != y.total){
		return x.total > y.total;
	}else{
		return x.name < y.name;
	}
}
int main(){
	int n;
	stu a[21];
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i].name >> a[i].total;
	}	
	sort(a,a+n,cmp);
	for (int i = 0;i < n;i++){
		cout << a[i].name <<" "<< a[i].total<<endl;
	}
	return 0;
}
