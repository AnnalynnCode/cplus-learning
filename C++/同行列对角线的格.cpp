#include<iostream> 
using namespace std;
int main(){
	int n,i,j;
	cin >> n >> i >> j;
	for (int h = 1;h <= n;h++){
		cout << "(" << i << "," << h << ")";
		if (h != n){
			cout << " ";
		}
	}
	cout << endl;
	for (int h = 1;h <= n;h++){
		cout << "(" << h << "," << j << ")";
		if (h != n){
			cout << " ";
		}
	}
	cout << endl;
	int x = i,y = j;
	
	if (x < y){
		while(x > 1){
			x--;
			y--;
		}
	}
	else{
		while(y>1){
			x--;
			y--;
		}
	}
	while(x <= n && y <= n){
		cout << "(" << x << "," << y << ")" << " ";
		x++;
		y++;
	}
	cout << endl;
	x = i;
	y = j;
	while(x < n && y > 1){
		x++;
		y--;
	}
	while(x >= 1 && y <= n){
		cout << "(" << x << "," << y << ")" << " ";
		x--;
		y++;
	}
	return 0;
}
