#include<iostream>
#include<string>
using namespace std;
struct stu{
	int n;
	double score;
};
int main(){
	int s,k;
	stu a[101],l;
	cin >>s >>k;
	for (int i = 1;i<=s;i++){
		cin >> a[i].n >> a[i].score;
	}
	for (int i = 1;i<=s;i++){
		for (int j = 1;j <= s - i;j++){
			if (a[j].score < a[j+1].score){
				l = a[j];
				a[j] = a[j + 1];
				a[j+1]=l;
			}
		}
	}
	cout << a[k].n << " "<<a[k].score;
	return 0;
}
