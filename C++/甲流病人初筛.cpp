#include<iostream>
#include<string>
using namespace std;
struct jialiu{
	string name;
	double s;
	int tf;
};
int main(){
	int n,num = 0;
	jialiu a[201];
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i].name >> a[i].s >> a[i].tf;
		if (a[i].s >=37.5 && a[i].tf == 1){
			num++;
		}
	}
	for (int i = 0;i < n;i++){
		if (a[i].s >=37.5 && a[i].tf == 1){
			cout << a[i].name<<endl; 
		}
	}
	cout << num;
	return 0;
} 
