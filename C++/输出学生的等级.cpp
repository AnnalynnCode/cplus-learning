#include<iostream>
using namespace std;
struct stu{
	int num,score;
};
int main(){
	int n,sum = 0,d = 0;
	stu m[101];
	cin >> n;
	for (int i = 0;i<n;i++){
		cin >>m[i].num>>m[i].score;
		sum+=m[i].score;
	}
	d = (double)sum / n;
	for (int i = 0;i < n;i++){
		if (m[i].score  >= d+10){
			cout << m[i].num<<" "<<m[i].score<<" "<<"A";
		}else if (m[i].score <= d - 10){
			cout << m[i].num<<" "<<m[i].score<<" "<<"C";
		}else{
			cout << m[i].num<<" "<<m[i].score<<" "<<"B";
		}
		cout << endl;
	}
	return 0;
}
