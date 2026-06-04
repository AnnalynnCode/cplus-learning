#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a==1)
	{
	    cout <<"End";	
	}
	else
	{
		do
		{
			if(a%2==1)
			{
			    cout<<a<<'*'<<3<<'+'<<1<<'='<<a*3+1<<endl;
				a=a*3+1;
			}
			else
			{
				cout<<a<<'/'<<2<<'='<<a/2<<endl;
				a/=2;
			}	
		}while(a!=1);
		cout<<"End";
    } 
	return 0; 
}
