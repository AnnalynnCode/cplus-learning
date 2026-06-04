#include<iostream>
using namespace std;
int main(){
	int n[101],n2[101],n1,in;
	cin >> n1;
	for (int i = 0;i < n1;i++){
        cin >> n[i];
    }
	for (int i = 0;i < n1;i++){
		for (int j = 0;j < n1;j++){
			if (n[j] < n[j+1]){
		        in = n[j];
		    }else{
		    	in = 0;
			}
		}
	}
	for (int i = 0;i < n1;i++){
		cout << n2 [i] << " ";
	}
	return 0;
}
