#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
	char a[100001];
	cin >> a;
	bool f = 1,f1 = 1;
	for (int i = 0;i < strlen(a);i++)
	{
		f = true;
		for (int j = 0;j < strlen(a);j++)
		if (i!=j && a[i]==a[j]){
            f = 0;
            f1 = 0;
            continue;
		}		
		if (f){
			cout << a[i];
			return 0;
		}
    }   
    if (!f1)
	{
		cout << "no";
	}
    return 0;
}
