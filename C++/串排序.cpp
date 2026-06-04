#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	string w[20],c = "Z";
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> w[i];
	}
	for (int i = 0;i < n;i++){
		for (int j = 0;j < n;j++){
			if (w[j] != ""){
				if (w[j] < c){
					c = w[j];
				}
			}	
		}
		cout << c << endl;
		for (int j = 0;j < n;j++)
		{
			if (w[j] == c){
				w[j] = "";
				break;
			}
		}
		c = "z";
	}
	return 0;
}
