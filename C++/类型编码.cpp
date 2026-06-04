#include<iostream>
#include<string>
using namespace std;
int main(){
	bool a = 1;
	string words1,words2;
	int s1 = 0,s2 = 0;
	cin >> words1 >> words2;
	//1
	if (words1.length() != words2.length()){
		cout << '1';
		return 0;
	}else{
		if (s1 == s2)
		{
			cout << '2';
			return 0;	
		} 
		//3
		s1 = 0;
		s2 = 0;
		a = 1;
		for (s1,s2;s1 < words1.length();s1++,s2++){
			if(words1[s1] >= 'A' && words1[s1] <= 'Z'){
				words1[s1] -= 32;
			}
			if(words2[s2] >= 'A' && words2[s2] <= 'Z'){
				words2[s2] += 32;
			}
		}
		if (words2[s2]  == words1[s1]){
			cout << '3';
			return 0;
		}else{
			cout << '4';
			return 0;
		}
	}
	return 0;
} 
