#include<bits/stdc++.h>
using namespace std;
bool huiwen(int a,string str){
    string str_a = str; 
    string d = str_a;
    reverse(str_a.begin(),str_a.end());
    return d == str_a;
}
bool check(string str){
    if (str.size() < 4){
        return false;
    }
    for (int i = 2;i <= str.size()-2;i++){
        int a = i,b = str.size() - i; 
        if (huiwen(a,str.substr(0,i)) == true && huiwen(b,str.substr(i))){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    string str;
    string h[15];
    cin >> n;
    for (int i = 0;i < n;i++){
        cin >> str;
        if (check(str) == true){
            h[i] = "Yes";
        }else{
            h[i] = "No";
        }
    }
    for (int i = 0;i < n;i++){
        cout << h[i]<<endl;
    }
    return 0;
}
