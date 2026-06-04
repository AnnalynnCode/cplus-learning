#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	for (int i = 0;i < a.size();i++){
		int id = i;
		for (int j = i+1;j < a.size();j++){
			if (a[j] >= a[id]) id = j;
		}
		if (id != i && a[id] != a[i]){
			swap(a[i],a[id]);
			break;
		}
	}
	cout <<a;
	return 0;
} 
