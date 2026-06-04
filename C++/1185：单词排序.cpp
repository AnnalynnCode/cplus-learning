#include<bits/stdc++.h>
using namespace std;
string a[105];
int main(){
	string s;
	int cut=1;
	while(cin >> s){
		a[cut] = s;
		cut++;
	}
	sort(a,a+cut);
	for (int i = 1;i < cut;i++){
		if (a[i] != a[i-1]){
			cout << a[i]<<endl;
		}
	}
	return 0;
}
