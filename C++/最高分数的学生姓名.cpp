#include<iostream>
#include<string>
using namespace std;
struct stu{
	int n;
	string name;
};
int main(){
	int s,max=0,id = 0;
	stu a[101];
	cin >>s;
	for (int i = 0;i < s;i++){
		cin >> a[i].n>>a[i].name;
		if (max < a[i].n){
			max = a[i].n;
			id = i;
		}
	}
	cout << a[id].name;
	return 0;
}
