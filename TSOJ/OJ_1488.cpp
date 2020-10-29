#include<iostream>
using namespace std;
int fun(int a,int b)
{
	int t;
	while(a%b)
	{
		t=a%b;
		a=b;
		b=t;
	}
	return b;
}
int main()
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
		 int m,n;
		 m=fun(a,fun(b,c));
		 cout<<m<<endl;
	}
	return 0;
}
