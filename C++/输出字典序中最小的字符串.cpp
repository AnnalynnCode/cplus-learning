#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s,min_s = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
	for (int i = 0;i < n;i++){
		cin >>s;
		if (s<min_s){
			min_s = s;
		}
	}
	cout <<min_s; 
	return 0; 
} 
