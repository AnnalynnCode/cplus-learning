#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n1,n2,n3,n4,n5;
	cin >> k;
	k *= 100;
	int a,b,c,d,e;
	cin >> n1>>n2>>n3>>n4>>n5;
	for (int i = 1;i <= k;i++){
		for (a = 1;a <= i;a++){
			b = i - a * n1;
			c = i - b * n2;
			d = i - c * n3;
			e = i - d * n4;
			if (a == i - e * n5){
				cout << i<<" "<<a<<" "<<b<< " "<<c<< " "<<d<< " "<<e; 
				return 0;
			}
		}
	}
	cout << "not found";
	return 0;
}
