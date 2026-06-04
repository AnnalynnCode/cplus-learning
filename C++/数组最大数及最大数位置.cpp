#include<iostream>
using namespace std;
int a[10000];
int main()
{
	int num,max_num=0,maxn;
	cin >> num;
	for (int i=0;i<num;i++)
	{
		cin >> a[i];
	}
	for (int j=0;j<num;j++)
	{
		if (a[j]>max_num)
		{
			maxn=j+1;
			max_num=a[j];
		}
	}
	cout << maxn <<' '<< max_num;
	return 0;
}
