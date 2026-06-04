#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s,r;
	getline(cin,s);
	bool space = false;
	for (int i = 0;i < s.length();i++)
	{
		if (s[i] == ' ')
		{
			if (!space)
			{
				r += s[i];
				space = true;
			}			
		}
		else
		{
			r += s[i];
			space = false;
		}
	}
	cout << r;
	return 0;
}
