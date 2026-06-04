#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r,a[501]; 
    cin>>n>> r;
    for (int i = 0;i < n;i++){
        cin >> a[i];
    } 
    sort (a,a+n); 
    int end[100] = {0};  
    int time = 0; 
    for (int i = 0; i < n; i++) {
        int t = a[i];  
        int e = 0; 
        for (int j = 1; j < r; j++) {  
            if (end[j] < end[e]) {
                e = j;  
            }
        }    
        time += end[e] + t;
        
    	end[e] += t;
    }
    cout << time;
    return 0;
}
