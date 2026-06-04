#include<iostream> 
#include<algorithm> 
using namespace std;
int main(){
	int n;
	int a[1001];
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	for (int i = 0;i < n - 1;i++){
		int k = i;
		for (int j = i+1;j < n;j++){
			if (a[k] < a[j]){
				k = j;
			}
		}
		swap(a[k],a[i]);
	}
	for (int i = 0;i < n;i++){
		cout <<a[i]<<" ";
	}
	return 0;
}
