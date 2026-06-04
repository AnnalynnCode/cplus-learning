#include<bits/stdc++.h>
using namespace std;
int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int week[] = {0,3,6,6,2,4,7,2,5,1,3,6,1};
int main(){
	int n;
	cin >> n;
	int w = week[n];
	int d = days[n];
	cout <<"MON TUE WED THU FRI SAT SUN"<<endl;
	for (int i = 1;i < w;i++){
		cout << "    ";
	}
	for (int i = 1;i <= d;i++){
		cout << setw(3)<<i;
		if ((w+i-1) % 7 == 0){
			cout << endl;
		}else{
			cout << " ";
		}
	}
	return 0;
}
