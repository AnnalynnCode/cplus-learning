#include<iostream>
using namespace std;
void f(int x){
	cout <<x%10;
	if (x > 10){
		f(x/10);
	}
}
int main(){
	int x;
	cin >> x;
	f(x);
	return 0;
} 
