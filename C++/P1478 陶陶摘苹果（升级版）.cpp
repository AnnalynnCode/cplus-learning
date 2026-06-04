#include<bits/stdc++.h>
using namespace std;
struct apple{
	int x,y;//苹果的高度为x，y为需要的力气
};
bool cmp(apple x1,apple y1){
	return x1.y < y1.y;
}
int main(){
	int n,s;//第一行，n为苹果数，s为力气
	int a,b,g;//第二行，a是椅子高度，b是陶陶手伸直的最大长度 ，合为g
	apple d[5005];
	cin >> n >> s;
	cin >> a >>b;
	g = a+b;
	for (int i = 0;i < n;i++){
		cin >> d[i].x >> d[i].y;
	} 
	sort(d,d+n,cmp);
	int cnt = 0;
	for (int i = 0;i < n;i++){
		if (s - d[i].y >= 0 && d[i].x <= g){
			s -= d[i].y;
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
