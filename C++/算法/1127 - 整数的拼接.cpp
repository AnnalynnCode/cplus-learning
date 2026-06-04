#include<bits/stdc++.h>
using namespace std;
string a[105];
bool cmp(string x,string y){
	return x+y > y+x;
}
int main(){
	int n;
	cin >>n;
	for (int i = 0;i < n;i++)cin >> a[i];
	sort(a,a+n,cmp);
	for (int i = 0;i < n;i++)cout <<a[i];
	return 0;
} 
