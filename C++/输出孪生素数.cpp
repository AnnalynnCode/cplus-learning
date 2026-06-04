#include<iostream>
using namespace std;
bool s(int i){
	bool f = 1;
	if(i == 1){
		return false;
	} 
	for (int j = 2;j < i;j++){
		if (i % j == 0){
			f = 0;
			break;
		}
	}
	return f;
}
int main(){
	int n;
	cin >> n;
	for (int i = 1;i<=n;i++){
		if (s(i) == true && s(i+2) == true){
			cout <<i <<" "<<i+2 << endl;
		}
	}
	return 0;
}
