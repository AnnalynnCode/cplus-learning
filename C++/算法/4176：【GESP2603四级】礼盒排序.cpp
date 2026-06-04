#include<bits/stdc++.h>
using namespace std;
struct hamper{
	int cost[11],maxy,miny;//为了不确定的商品数，定义数组
	int total,t; 
};
//1. 先按礼盒总价格从小到大排序；
//2. 如果总价格相同，按礼盒中最贵商品的价格从小到大排序；
//3. 如果仍然相同，按礼盒中最便宜商品的价格从小到大排序；
//4. 如果仍然相同，按礼盒编号从小到大排序。
bool cmp(hamper x,hamper y){//排序 
	if (x.total == y.total){
		if (x.maxy == y.maxy){
			if (x.miny == y.miny){
				return x.t < y.t;
			}else{
				return x.miny < y.miny;
			}
		}else{
			return x.maxy < y.maxy;
		}
	}else{
		return x.total < y.total;
	}
}
int main(){
	int n,k;
	hamper nd[1001];
	cin >> n >>k;
	for (int i = 0;i < n;i++){
		int num = 0,maxn = 0,minn = 100001;
		for (int j = 0;j < k;j++){
			cin >> nd[i].cost[j];
			maxn = max(maxn,nd[i].cost[j]);//提前设最小最大值 
			minn = min(minn,nd[i].cost[j]);
			num += nd[i].cost[j];
		} 
		nd[i].total = num;
		nd[i].t = i+1;
		nd[i].maxy = maxn;
		nd[i].miny = minn;
	}
	sort(nd,nd+n,cmp);
	for (int i = 0;i < n;i++){
		cout <<nd[i].t <<" ";
	}
	return 0;
} 
