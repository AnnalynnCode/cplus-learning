#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int x,int y){
	return x > y;
}
int main(){
	int n,l = 0;
	cin >> n;
	int a[1001],b[1001];
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	l = 0;
	for (int i = 0;i < n;i++){
		while(a[i] != 0){
			b[l] = a[i]%10;
			a[i] /= 10;
			l++;
		}
	}
	sort(b,b+l,cmp);
	for (int i = 0;i < l;i++){
		cout <<b[i];
	}
	return 0;
}
