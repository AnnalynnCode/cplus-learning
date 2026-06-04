#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[104] = {0};
	cin >>n;
	cout <<n<<endl;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < n;j++){
			if (j != i){
				a[j] = !a[j];
			}
		}
		for (int k = 0;k < n;k++){
			cout << a[k];
		}
		cout << endl;
	}
	return 0;
}
