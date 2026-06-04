#include<iostream> 
using namespace std;
int main()
{
int x,b,l,w,s;
cin >> x;
b=x%4;
switch(b)
{
	case 0:
		l=0;
		w=0;
		s=x/4;
		cout<< l<<' '<<w<<' '<<s;
		break;
	case 1:
		l=0;
		w=1;
		s=x/4-1;
		cout<< l<<' '<<w<<' '<<s;
		break;
	case 2:
		l=1;
		w=0;
		s=x/4-1;
		cout<< l<<' '<<w<<' '<<s;
		break;	
	case 3:
		l=1;
		w=1;
		s=x/4-2;
		cout<< l<<' '<<w<<' '<<s;
		break;		
}
return 0;	
} 
