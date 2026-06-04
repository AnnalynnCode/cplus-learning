#include<iostream>
#include<string> 
using namespace std;
int main()
{
	string s;
	int d = 0;
	getline(cin,s);
	for (int i = 0;i < s.length();i++)
	{
		if (s.at(i) <= '9' && s.at(i) >= '0')
		{
			d++;
		}
	}
	cout << d;
	return 0;
}
