#include<bits/stdc++.h>
using namespace std;
bool gcd(int v1,int v2){
	if (v2 == 0){
		return v1;
	}else{
		return gcd(v2,v1%v2);
	}
}
int main(){
	int a,b,l,u1,u2;
	double min=1000005;
	cin >>a >> b>> l;
	for (int i = 1;i <= l;i++){
		for (int j = 1;j <= l;j++){
			if (i*b >= j*a && gcd(i,j) == 1){
				if (fabs((double)i / j - (double)a / b) < min){
					min = fabs((double)i / j - (double)a / b);
					u1 = i;
					u2 = j;
				}
			}
		}
	}
	cout << u1 <<" "<<u2;
	return 0;
} 
