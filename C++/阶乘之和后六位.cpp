#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
    cin >> n;	
	for (int i=1;i<=n;i+=1)
	{
		int t=1;
		for (int j=1;j<=i;j+=1)
		{
			t=(t*j)%1000000;
			if(t==0)
			{
				break;
			}
		} 
		s=(s+t)%1000000;
	}
	cout <<s;
	return 0; 
}
