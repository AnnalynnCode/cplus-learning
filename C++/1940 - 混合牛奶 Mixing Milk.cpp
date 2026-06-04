#include<bits/stdc++.h>
using namespace std;
struct milk{
    int p,q;
};
bool cmp(milk x,milk y){
    return x.p < y.p;
}
int main(){
    int n,m;
    milk a[5001];
    cin >> n >> m;
    
    for (int i = 0; i < m; i++){
        cin >> a[i].p >> a[i].q;
    }

    int num = 0, mo = 0;
    sort(a, a + m, cmp);

    for (int i = 0; i < m; i++){
        if (num >= n) break; 
        int buy = min(n - num, a[i].q);
        
        num += buy;
        mo += buy * a[i].p;
    }
    cout<<mo;
    return 0;
}
