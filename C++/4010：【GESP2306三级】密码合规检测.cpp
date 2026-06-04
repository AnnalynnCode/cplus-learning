#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    int l = s.size();
    if(l<6||l>12) return 0;
    bool up=0, low=0, dig=0, sym=0;
    for(int i=0; i<s.size(); i++){
        char c = s[i];
        if(c>='A'&&c<='Z') up=1;
        else if(c>='a'&&c<='z') low=1;
        else if(c>='0'&&c<='9') dig=1;
        else if(c=='!'||c=='@'||c=='#'||c=='$') sym=1;
        else return 0;
    }
    return (up+low+dig>=2 && sym);
}

int main(){
    string s,t;
    getline(cin,s);
    for(int i=0; i<s.size(); i++){
        char c = s[i];
        if(c==','){
            if(check(t)) cout<<t<<endl;
            t="";
        }else t+=c;
    }
    if(check(t)) cout<<t<<endl;
    return 0;
}

