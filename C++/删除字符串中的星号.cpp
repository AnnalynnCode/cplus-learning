#include<iostream>
#include<string>
using namespace std;
int main(){
	string s,s1 = "";
	cin >>s;
	int i = 0,w=0;
	while(s[i] == '*'){
		s1 += s[i];
		i++;
	}
	int j = s.length()-1;
	while(s[j] == '*'){
		w+=1;
		j--;
	}
	for (int i1 = i;i1<=j;i1++){
		if (s[i1] != '*'){
			s1+=s[i1];
		}
	}
	cout << s1;
	for (int i = 0;i<w;i++){
		cout << "*";
	}
	return 0;
} 
