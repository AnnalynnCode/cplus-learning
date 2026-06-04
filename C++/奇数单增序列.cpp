#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,a[501],jishu[501];
	cin >>n;
	int j = 0;
	for (int i = 0;i < n;i++){
		cin >> a[i];
		if (a[i] % 2 == 1){
			jishu[j] = a[i];
			j++;
		}
	}
	sort(jishu,jishu+j);
	for (int i = 0;i < j;i++){
		if (i == j-1){
			cout << jishu[i];
		}else{
			cout << jishu[i]<<',';
		}
	}
	return 0;
}
