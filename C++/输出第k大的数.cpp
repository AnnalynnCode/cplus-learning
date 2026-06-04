#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int x,int y){
	return x > y;
}
int main(){
	int n,a[1001],k;
	cin >> n >>k;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n,cmp);
	cout <<a[k-1];
	return 0;
} 
