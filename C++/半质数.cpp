#include<bits/stdc++.h>
using namespace std;
bool f[5000005];
void sushu(long long e){
	for (long long i = 2;i*i <= e;i++){
		if (f[i] == false){
			for (long long j = i*2;j <= e;j += i){
				f[j] = true;
			}
		}
	}
}
int main(){
	long long s,e,sum = 0;
	cin >> s >> e;
	sushu(e);
	for (long long i = 2;i*i <= e;i++){
		if(f[i] == false){
			for (long long j = i;j*i <= e;j++){
					if (f[j] == false && i*j >= s){
						sum++;	
					}
			}
		}
	}
	cout << sum;
	return 0;
} 
