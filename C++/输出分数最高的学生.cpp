#include<iostream>
using namespace std;
struct stu{
	int score;
	string name;
};
int main(){
	stu a[101];
	int s,j = 0;
	cin >>s;
	for (int i = 0;i < s;i++){
		cin >>a[i].score>>a[i].name;
	}
	int max = a[0].score;
	for (int i = 1;i < s;i++){
		if (max < a[i].score){
			max = a[i].score;
			j = i;
		}
	}
	cout << a[j].name;
	return 0;
}
