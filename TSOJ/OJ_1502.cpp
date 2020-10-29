#include<iostream>
using namespace std;
int fun(int m,int n)
{
	if(m==0)  return 1;
	if(n==0)  return 0;
	if(n<=m)  return fun(m-n,n)+fun(m,n-1);
	else      return fun(m,n-1);
}
int main()
{
	int n;
	while(cin>>n)
	{
		cout<<fun(n,n)%100000007<<endl;
	}
	return 0;
}
