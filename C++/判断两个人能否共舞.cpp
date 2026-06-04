#include<iostream>
#include<string>
using namespace std;
struct wu{
	string num;
	string name;
	char sex;
};
int main(){
	int n,m;
	string d,s;
	cin >>n;
	wu a[1001];
	for (int i = 0;i < n;i++){
		cin >> a[i].name>>a[i].num>>a[i].sex;
	}
	cin >> m;
	char c,h;
	for (int i = 0;i < m;i++){
		cin >> d >> s;
		//d的性别 
		if (d[0] >= '0' && d[0] <= '9'){
			for (int j = 0;j < n;j++){
				if (a[j].num == d){
					c = a[j].sex;
				}
			}
		}else{
			for (int j = 0;j < n;j++){
				if (a[j].name == d){
					c = a[j].sex;
				}
			}
		}
		//s的性别 
		if (s[0] >= '0' && s[0] <= '9'){
			for (int j = 0;j < n;j++){
				if (a[j].num == s){
					h = a[j].sex;
				}
			}
		}else{
			for (int j = 0;j < n;j++){
				if (a[j].name == s){
					h = a[j].sex;
				}
			}
		}
		//性别是否相符 
		if (c != h){
			cout << "yes";
		}else{
			cout << "no"; 
		}
	}
	return 0;
}
