#include<bits/stdc++.h>
using namespace std;
int main(){
	string already_a,already_b,never;//定义变量 
	cin >> already_a>>already_b>>never;
	int diffrence;
	//防止跨出大写字母范围的差值 
	 diffrence = (already_a[0] - already_b[0] + 26) % 26;
	//破译凯撒密码
	for (int i = 0;i < never.size();i++){
		//防止破译时跨出大写字母差值范围
		 if (never[i] >= 'A' && never[i] <= 'Z') {
            never[i] = (never[i] - 'A' + diffrence) % 26 + 'A';
        }
	} 
	//结束 
	cout << never;
	return 0;
}
