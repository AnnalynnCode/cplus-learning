#include<iostream>
using namespace std;
int main()
{
	char s = 'a';
	for (s;s <= 'z';s += 2)
	{
		cout << s << ' ';
	}
	char z = 'z';
	cout << endl;
	for (z;z >= 'a';z -= 2)
	{
		cout << z << ' ';
	}
	return 0;
}
