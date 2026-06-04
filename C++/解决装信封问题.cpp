#include<iostream>
using namespace std;
int d(int n){
	if (n == 1){
		return 0;
	}
	else if (n == 2){
		return 1;
	}
	else{
		return (n-1)*(d(n-1)+d(n-2));
	}
	
}
int main(){
	int n;
	cin >> n;
	cout << d(n);
	return 0;
} 
