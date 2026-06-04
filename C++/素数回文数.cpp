#include<iostream>
using namespace std;
bool s(int i){
	bool f = 1;
	for (int j = 2;j < i;j++){
		if (i % j == 0){
			f = 0;
			break;
		}
	}
	return f;
}
bool hw(int i){
	int x = 0,y = i;
	while(i){
		x = x * 10 + i % 10;
		i /= 10;
	}
	return x == y;
}
int main(){
	for (int i = 10;i <= 1000;i++){
		if (s(i) == true && hw(i) == true){
			cout << i << " ";
		}
	}
	return 0;
} 
