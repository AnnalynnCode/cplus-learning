#include<bits/stdc++.h>
using namespace std;
bool cmp(int v1,int v2){
	return v1 > v2;
}
int main(){
	int a[11],ji[11],ou[11],jiv = 0,ouv = 0;
	for (int i = 0;i < 10;i++){
		cin >> a[i];
		if (a[i] % 2 == 0){
			ou[ouv] = a[i];
			ouv++;
		}else{
			ji[jiv] = a[i];
			jiv++;
		}
	} 
	sort(ou,ou+ouv);
	sort(ji,ji+jiv,cmp);
	for (int i = 0;i < jiv;i++){
		cout << ji[i] <<" ";
	}
	for (int i = 0;i < ouv;i++){
		cout << ou[i] <<" ";
	}
	return 0;
} 
