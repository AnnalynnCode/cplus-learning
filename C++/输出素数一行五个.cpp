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
int main(){
	int n,s1 = 0;
	cin >> n;
	for (int i = 2;i <= n;i++){
		if (s(i) == true){
			if (s1 != 5){
				cout << i << " ";
				s1++;
			}else{
				cout << endl <<i << " ";
				s1 = 0;
			}
		}
	}
	return 0;
}
