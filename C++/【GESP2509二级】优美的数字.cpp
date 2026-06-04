#include<iostream>
using namespace std;
bool b(int i){
	int s = i % 10,f;
	while(i){
		f = i % 10;
		if (s != f){
			return false;
		} 
		i /= 10;
	}
	return true;
}
int main(){
	int n,sum = 0;
	cin >>n;
	for (int i = 1;i <= n;i++){
		if (b(i) == true){
			sum++;
		}
	}
	cout << sum;
	return 0;
} 
