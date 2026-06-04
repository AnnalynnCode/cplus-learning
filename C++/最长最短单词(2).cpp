#include<iostream>
#include<string>
using namespace std;
int main(){
	string s,max_l,min_l;
	int max = 0,min = 255; 
	while (cin >> s){
		if (s.length() > max){
			max_l = s;
			max = s.length();
		}
		if (s.length() < min){
			min_l = s;
			min = s.length();
		}
	}
	cout << max_l << endl << min_l; 
	return 0;
}
