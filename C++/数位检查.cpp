#include<iostream>
using namespace std;
bool f(int n,int d){
	int y = 0;
	while(n){
		y = n % 10;
		n /= 10;
		if (y == d){
			return true;
		}
	}
	return false;
}
int main(){
	int n,d;
	cin >> n >> d;
	cout << f(n,d);
} 
