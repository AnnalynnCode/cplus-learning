#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	double r,p = 3.14159;
	scanf("%lf",&r);
	printf("%.4lf %.4lf %.4lf",r * 2,p * (r * 2),p * (r * r));
	return 0;
}
