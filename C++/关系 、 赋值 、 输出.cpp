//关系 、 赋值 、 输出
#include<iostream>
#include<string>
using namespace std;
int main(){
	string words1,words2;
	bool b,s,c;
	cin >> words1 >> words2;
	//1
	b = words1 > words2;
	s = words1 < words2;
	c = words1 == words2;
	if (b == true){
		cout << words1 << ">"<<words2;
	}else if(s == true){
		cout << words1 << "<"<<words2;
	}else{
		cout << words1 << "="<<words2;
	}
	//2
	words1 = words2;
	//3
	cout <<endl<< words1;
	return 0;
} 
