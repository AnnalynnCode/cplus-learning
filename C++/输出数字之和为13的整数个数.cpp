#include<iostream>
using namespace std;
int s(int i){
	int t = 0;
	while(i){
		t += i%10;
		i/=10;
	}
	return t;
}
int main(){
	int n,num = 0;
	cin >> n;
	for (int i = 1;i <= n;i++){
		if (s(i) == 13){
			num++;
		}
	}
	cout << num;
	return 0;
} 
