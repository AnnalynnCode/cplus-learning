#include<iostream>
#include<string>
using namespace std;
int main(){
	string words = "",words_a = "",longest = "",shortest = "";
	int max = 0,min = 1001;
	getline(cin,words);
	for (int i = 0;i < words.length();i++){
		if ((words[i] >= 'a' && words[i]<= 'z') || (words[i] >= 'A' && words[i]<= 'Z')){
			words_a += words[i];
		}
		else{
			if (words_a.length() > max){
				longest = words_a;
				max = words_a.length();
			}
			if (words_a.length() < min){
				shortest = words_a;
				min = words_a.length();
			}
			words_a = "";
		}
	}
	cout << longest << endl << shortest;
	return 0;
}
