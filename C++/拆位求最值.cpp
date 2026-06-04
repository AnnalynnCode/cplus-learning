#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	//²ðÎ»; 
	int ab = a/100;
	int ash =a/10%10;
	int ag =a%10;
	//±È½Ï;
	int maxn;
	maxn=ab;
	if (maxn<ash)
	{
		maxn=ash;
	} 
	if (maxn<ag)
	{
		maxn=ag;
	} 
	cout << maxn <<endl;
	return 0;	
}
