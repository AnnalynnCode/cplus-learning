#include<iostream>
using namespace std;
int main(){
	int n,j = 1;
	cin >>n;
	for (int i = 2;i <= n/i;i++){
		while(n%i == 0){
			cout << i << endl;
			j *= i;
			n/=i;
			
		}
	}
	if (n > 1){
		cout <<n;
	}
	return 0;
} 
