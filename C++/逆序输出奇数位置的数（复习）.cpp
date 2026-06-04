#include<iostream>
using namespace std;
int number[101];
int main(){
	int a;
	cin >> a;
	for (int i=0;i<a;i++)
	{
		cin >> number[i];
	}
	for (int i=1;i<=a;i+=2)
	{
		cout << number[a-i] << ' ';
	}
	return 0;
}
