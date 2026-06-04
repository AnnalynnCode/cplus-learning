#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	printf("%d \n%.1lf",x + y + z,(x + y + z)/3.0);
	return 0;
}
