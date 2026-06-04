#include<iostream>
using namespace std;
int main(){
	int a[10001];
    int n;
    cin >> n;
    for (int i = 0;i < n;i++){
        cin >>a[i];
    }
    int k = 0;
    int s = 0;
    for (int i = 0;i < n;i++){
        for (int j = 0;j < n - i - 1;j++){
            if (a[j] > a[j+1]){
                k = a[j];
                a[j] = a[j+1];
                a[j+1] = k;
//                cout <<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
            }
            s++;
//            cout <<s<<endl;
        }
    }
    cout <<s;
	return 0;
} 
