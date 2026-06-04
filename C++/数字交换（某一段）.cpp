#include<iostream>
using namespace std;
int main()
{
	int a[20],temp,n;
	cin >> n;
	for (int i=0;i<n;i++)
	{
		cin >> a[i];
	}
    int start1,end1;
    cin >> start1>>end1;
    int start2,end2;
    int lenth = end1 - start1 + 1;
    cin >> start2>> end2;
	for (int k=0;k<lenth;k++) 
	{
		temp = a[start1-1+k];
		a[start1-1+k]=a[start2-1+k];
		a[start2-1+k]=temp;
	}
	
	for (int i=0;i<n;i++)
	{
		cout << a[i]<<" ";
	}
	
	return 0;
}
