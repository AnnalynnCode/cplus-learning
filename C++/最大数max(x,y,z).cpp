#include<iostream>
#include<iomanip>
using namespace std;
double max(int a,int b,int c){
	int max_n = 0;
	if (a > max_n){
		max_n = a;
	}
	if (b > max_n){
		max_n = b;
	}
	if (c > max_n){
		max_n = c;
	}
	return max_n;
}
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	double m = max(a,b,c)/(max(a+b,b,c) * max(a,b,b+c));
	cout << fixed << setprecision(3)<<m;
	return 0;
}
