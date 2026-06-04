#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n,sum = 1;
	cin >> n;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < n;j++){
			cout << setw(3) << sum;
			sum++;
		}
		cout << endl;
	}
	return 0;
}
