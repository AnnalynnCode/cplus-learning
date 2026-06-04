#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int b[101],t=0,sum=0;
	cin>>a;
	sum+=a[0]-'0';
	for(int i=0;i<a.size();i++){
		if(a[i]>='0' and a[i]<='9'){
			b[t]=a[i]-'0';
			t++;
		}
	}
	t=1;
	for(int i=0;i<a.size();i++){
		if(a[i]=='+'){
			sum+=b[t];
			t++;
		}else if(a[i]=='-'){
			sum-=b[t];
			t++;
		}else if(a[i]=='*'){
			sum*=b[t];
			t++;
		}
	}
	cout << sum;
	return 0;
}
