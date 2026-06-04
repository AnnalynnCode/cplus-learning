#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
int main(){
 	int t;
 	cin >> t;
 	for (int i = 0;i < t;i++){
 		cin >> n;
 		for (int j = 0;j < n;j++) cin >> a[i];
		bool l = false; 
		for (int i1 = 0;i1 < n-1;i1++){
			bool f = true;
			for (int k = i1+1;k < n;k++){
				if (!a[i1] % a[k]){
					f = false;
					break;
				}
			}
			if (f == true){
				cout << "Yes"<<endl;
				l = true;
				break;
			}
		}
		if (!l){
			cout << "No"<<endl;
		}
	}
	return 0;
}
