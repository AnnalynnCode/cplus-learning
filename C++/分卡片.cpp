#include <iostream>
using namespace std;
int main()
{
    int b,c,d;
    int a=0;
    cin >> b >> c >> d;
    
    
    a += b%3;
    b /= 3;
    c += b;
    d += b;
    
    
    a += c%3;
    c /= 3;
    d += c;
    b += c;
    
    
    a += d%3;
    d /= 3;
    b += d;
    c += d;
    cout << b <<" " << c <<" "<< d<<" "<<a;
	return 0; 
}
