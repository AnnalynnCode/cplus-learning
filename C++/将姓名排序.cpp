#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct stu{
	int s;
	string name; 
};
bool cmp(stu x,stu y){
	if (x.name.length() == y.name.length()){
		if (x.name == y.name){
			return x.s > y.s;
		}else{
			return x.name > y.name;
		}
	}else{
		return x.name.length() > y.name.length();
	}
}
int main(){
	int n;
	cin >> n;
	stu a[101];
	for (int i = 0;i < n;i++){
		cin >> a[i].s >>a[i].name;
	}
	sort (a,a+n,cmp);
	for (int i = 0;i < n;i++){
		cout << a[i].s << " "<<a[i].name;
		cout << endl;
	}
	return 0;
} 
