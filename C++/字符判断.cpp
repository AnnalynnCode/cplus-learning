#include<iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if ((a>='A') && (a<'Z'))
	{
		cout << "uppercase";
	}
	else if ((a>='a') && (a<='z'))
	{
	    cout << "lowercase"; 	
	}
	else if ((a>='0') && (a<='9'))
	{
		cout << "number";
	}
	else
	{
		cout << "others";
	}
	return 0;
}
