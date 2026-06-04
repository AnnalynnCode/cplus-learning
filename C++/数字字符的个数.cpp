#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	int n = 0;
	getline(cin , a);
	for (int i = 0;a[i] != '\0';i++){//i < a.length() »ò i < a.size()¸ü·½±ã 
		if (a[i] >= '0' && a[i] <= '9'){
			n++;
		}
	}
	cout << n;
	return 0; 
} 
