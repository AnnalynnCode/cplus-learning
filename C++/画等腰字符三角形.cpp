#include<iostream>
using namespace std;
int main(){
	int n,j;
	cin >> n;
	for (int i = 0;i < n;i++){
		for (j = i + 1;j < n;j++){
			cout << " ";
			
		}
		for (int jj = 0;jj <= i;jj++){
			cout << "A";
		}
			for (int jj = i;jj > 0;jj--){
			cout << "A";
		}
		cout << endl;
	}
	
	return 0;
}
