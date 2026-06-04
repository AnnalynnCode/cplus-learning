#include<iostream>
using namespace std;
int main(){
	int n,s,j = 0,o = 0;
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> s;
		if (s % 2 == 0){
			o++;
		}else{
			j++;
		}
	}
	cout << j << " "<< o;
	return 0;
} 
