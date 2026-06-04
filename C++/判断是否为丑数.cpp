#include<iostream>
using namespace std;
int main(){
	int n,x;
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> x;
		if (x == 1){
			cout << "yes";
		}else{
			if (x % 2 == 0 || x % 3 == 0 || x % 5 == 0 || x % 7 == 0){
				cout <<"yes";
			}else{
				cout << "no";
			}
		}
		cout << endl; 
	}
	return 0;
}
