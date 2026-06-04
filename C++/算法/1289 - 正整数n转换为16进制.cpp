#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	string sn;
	cin >>n;
	if (n == 0){
		cout <<0;
		return 0;
	}
	while(n){
		int v = n % 16;
		if (v >= 0 && v <= 9){
			sn += (v + '0'); 
		}else if (v == 10){
			sn += 'A';
		}else if (v == 11){
			sn += 'B';
		}else if (v == 12){
			sn += 'C';
		}else if (v == 13){
			sn += 'D';
		}else if (v == 14){
			sn += 'E';
		}else if (v == 15){
			sn += 'F';
		}
		n /= 16;
	}
	reverse(sn.begin(),sn.end());
	cout << sn;
	return 0;
} 
