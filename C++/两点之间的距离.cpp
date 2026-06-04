#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x1,x2,y1,y2;
	cin >> x1 >>y1>>x2>>y2;
	double a = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	cout << a;
	return 0;
} 
