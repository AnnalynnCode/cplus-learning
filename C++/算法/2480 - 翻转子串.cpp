#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	int cnt = 0;
	bool flag = false;
	int n;
	cin >>n;
	cin >>a >>b;
	for (int i = 0;i < a.size();i++){
		if (a[i] != b[i]){
			if (flag == 0){//是否是第一次不相同 
				cnt++;
				flag = 1;//置标志 
			}
		}else{
			flag = 0;//清标志 
		}
	}
	cout << cnt; 
	return 0;
}
