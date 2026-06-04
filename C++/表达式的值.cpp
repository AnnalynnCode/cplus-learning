#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main(){
	string a,num;
	cin >> a;
	a += '+';
	int sum;
	for (int i = 0;i<a.length();i++){
		if (a[i] == '+'){
			sum += atoi(num.c_str());
			num = "";
		}else{
			num += a[i];
		}
	}
	cout << sum;
	return 0;
} 
