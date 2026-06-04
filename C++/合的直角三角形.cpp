#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cin >> a >> b;
  for (int i=1;i<=4;i++)
  {
    for (int j=1;j<=i;j++)
    {
        cout << a+b;
    }
    cout << endl;
  }
  return 0;
}
