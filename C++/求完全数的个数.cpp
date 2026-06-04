#include<bits/stdc++.h>
using namespace std;
bool wanquan(int h) {
    if (h <= 1) return false;  

    int sum = 1; 
    for (int i = 2; i <= sqrt(h); i++) {
        if (h % i == 0) {
            sum += i;
            if (i != h / i) {
                sum += h / i;
            }

            if (sum > h) {
                return false;
            }
        }
    }
    
    if (sum == h){
    	return true;
	}else{
		return false;
	}
    
}

int main(){

    int n;
    cin >> n;
    
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (wanquan(i)) {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}
