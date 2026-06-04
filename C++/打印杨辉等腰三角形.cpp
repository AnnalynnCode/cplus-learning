#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int p,s;
	cin >> s;
	for (int i=1;i<=s;i+=1)
	{
		p=1;
		cout <<setw(3*(s - i)+1)<< p;
		for(int j=1;j<i;j+=1)
		{
			p=p*(i-j)/j;
			cout <<setw(6)<< p;
		}
		cout << endl;	
	}	
	return 0;
} 
