#include<iostream>
using namespace std;
int main()
{
	double a,c;
	char b;
	cin >>a>>b>>c;
	switch(b)
	{
		case '+':
			cout << a+b;
			break;
		case'-':
			cout<<a-b;
			break;
		case'*':
			cout<<a*b;
			break;
		case'/':
			if (c==0)
			{
				cout << "Divided by zero";
			}
			else
			{
				cout << a/b;
			}
			break; 
		default:
			cout <<"Invalid operator";
	}
	return 0;
} 
