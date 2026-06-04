#include<iostream>	
#include<string>
using namespace std;
int main(){
	int k = 0;
	cin >> k;
	string a;
	cin >> a;
	int count = 1;
	for (int i = 0;i < a.length();i++){
		if (a[i] == a[i + 1]){
			count += 1;
			if (count >= k){
				cout << a[i];
				return 0;
			}
		}else{
			count = 1;
		}
	}
	cout << "No";
	return 0;
}
