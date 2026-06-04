#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("time.in","r",stdin);
	freopen("time.out","w",stdout);
	char d1,d2;
	string i; 
	int p1,p2,j;
	cin >> d1 >> p1;
	cin >> d2 >> p2;
	if (d1 == 'W')p1 = 0 - p1;
	if (d2 == 'W')p2 = 0 - p2;
	int h,m;
	cin >>h >> m;
	int shicha = p2 - p1;
	h += shicha;
	if (h >= 24){
		i = "+1";
		h %= 24;
	}else if (h < 0){
		i = "-1";
		h += 24;
	}
	cout <<h <<" "<< m <<" "<<i;
	return 0;
}
