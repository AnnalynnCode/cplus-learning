#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int x,int y){
	return x > y;
}
int main(){
	int  n,a[1001];
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n,cmp);
	for (int i = 0;i < n;i++){
		cout << a[i]<<" ";
	}
	return 0;
}
