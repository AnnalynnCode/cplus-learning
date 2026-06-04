#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin  >>n >> m;
	int min,max;
	if (n > m){
		min = m;
		max = n;
	}else{
		min = n;
		max = m;
	}
	for (int i = 1;;i++){
		if (i %  max == 0 && i % min == 0){
			cout << i;
			break;
		}
	}
	return 0;
} 
