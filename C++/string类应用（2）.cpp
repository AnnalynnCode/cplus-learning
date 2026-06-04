#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	while(getline(cin , s))
	{
		int i = 1;
		cout<<i <<' '<< s << endl;
		i++;
	}
	return 0;
}
