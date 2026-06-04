#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct stu{
	int num;
	string name;
	char sex;
	double score;
};
int main(){
	stu a;
	cin >> a.num >> a.name >> a.sex >>a.score;
	cout <<a.num<<" "<<a.name<<" "<<a.sex<<" "<<fixed << setprecision(1)<<a.score;
	return 0;
} 
