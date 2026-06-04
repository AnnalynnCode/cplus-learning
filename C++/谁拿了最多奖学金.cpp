#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,sum = 0,num = 0,t,max = -1,k = 0,s1;
	char b,o; 
	string s[101],best;
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> s[i] >> sum >> num >> b >> o >> t; 
		if (sum > 80 && t >= 1){
			k += 8000;
		}
		if (sum > 85 && num > 80){
			k += 4000;
		}
		if (sum > 90){
			k += 2000;
		}
		if (sum > 85 && b == 'Y'){
			k += 1000;
		} 
		if (num > 80 && o == 'Y'){
			k += 850;
		}
		if (k > max){
			max = k;
			best = s[i];
			s1 += k;
		}
	}
	cout << best << endl << max << endl << s1;
	return 0; 
}
