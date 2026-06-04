#include<bits/stdc++.h>
using namespace std;
string k[4][5] = {{".....",".***.",".***.",".***.","....."}
				 ,{"****.","****.","****.","****.","****."}
				 ,{".....","****.",".....",".****","....."}
				 ,{".....","****.",".....","****.","....."}};
int main(){
	string n;
	cin >> n;
	for (int i = 0;i < 5;i++){
		for (int j = 0;j < n.size();j++){
			if (n[j] == '0'){
				cout << k[0][i];
			}else if (n[j] == '1'){
				cout << k[1][i];
			}else if (n[j] == '2'){
				cout << k[2][i];
			}else if (n[j] == '3'){
				cout << k[3][i];
			}
		}
		cout << endl;
	}
	return 0;
}
