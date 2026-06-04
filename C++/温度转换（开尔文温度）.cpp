#include<iostream>
#include<iomanip> 
using namespace std;
int main(){
	double k;
	cin >> k;
	double f,c;
	c = k - 273.15;
	f = c * 1.8 + 32;
	if (f > 212){
		cout << "Temperatrue is too high!";
		return 0;
	}else{
		cout <<fixed << setprecision(2)<<c << " "<<f;
	}
	return 0;
} 
