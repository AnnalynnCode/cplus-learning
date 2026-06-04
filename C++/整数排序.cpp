#include<iostream>
#include<algorithm>
using namespace std;
bool s(int c,int b){
	return c>b; 
}
int main(){
	int j[11],o[11],ai = 0,aj = 0;
	int a[11];
	for (int i = 0;i < 10;i++){
		cin >> a[i];
		if (a[i] % 2 == 0){
			o[aj] = a[i];
			aj++;
		} else{
			j[ai] = a[i];
			ai++; 
		}
	}
	sort (j,j+ai,s);
	for (int i = 0;i < ai;i++){
		cout <<j[i] <<" ";
	}
	for (int i = aj-1;i >= 0;i--){
		cout <<o[i]<<" "; 
	}
	return 0; 
}
