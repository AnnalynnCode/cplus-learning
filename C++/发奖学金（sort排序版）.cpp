#include<iostream>
#include<algorithm>
using namespace std;
struct stu{
	int s;
	int yu,shu,ying,zongfen;
};
bool cmp(stu x,stu y){
	if (x.zongfen == y.zongfen){
		if (x.yu == y.yu){
			return x.s < y.s;
		}else{
			return x.yu > y.yu;
		}
	}else{
		return x.zongfen > y.zongfen;
	}
}
int main(){
	int n;
	stu h[301];
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> h[i].yu >> h[i].shu >> h[i].ying;
		h[i].zongfen = h[i].shu+h[i].ying+h[i].yu;
		h[i].s = i+1;
	}
	sort (h,h+n,cmp);
	for (int i = 0;i < 5;i++){
		cout << h[i].s << " "<<h[i].zongfen;
		cout << endl;
	}
	return 0;
} 
