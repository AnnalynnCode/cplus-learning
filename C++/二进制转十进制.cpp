#include<iostream>
#include<cmath> 
#include<cstring>
using namespace std;
int main(){
	char a[26];
	int sum = 0,k = 0;
	cin >> a;
	for (int i = strlen(a) - 1;i >= 0;i--){
		sum += (a[i] - '0') * pow(8,k);
		k++;
	}
	cout << sum;
	return 0;	
}
