#include<bits/stdc++.h>
using namespace std;
struct pe{
	string id;
	int age,to;
};
bool cmp(pe x,pe y){
	if (x.age >= 60 && y.age < 60){
		return x.age > y.age;
	}else if (y.age >= 60 && x.age < 60){
		return  y.age < x.age;
	}else if (y.age < 60 && x.age < 60){
		return x.to < y.to;
	}else if (y.age >= 60 && x.age >= 60){
		if (x.age == y.age){
			return x.to < y.to;
		}else{
			return x.age > y.age;
		}
	}
}
int main(){
	int n;
	cin >>n;
	pe a[101];
	for (int i = 0;i < n;i++){
		cin >> a[i].id >> a[i].age;
		a[i].to = i+1;
	}
	sort(a,a+n,cmp);
	for (int i = 0;i < n;i++){
		cout << a[i].id<<endl;
	}
	return 0;
} 
