#include<iostream>
using namespace std;
void fun(int n)
{
	for(int i=n;i>4;i--)
	{
		cout<<i<<","<<i+1<<"-->"<<2*i+1<<","<<2*i+2<<endl;
		cout<<2*i-1<<","<<2*i<<"-->"<<i<<","<<i+1<<endl;
	}
}
int a[5][4]={{4,5,9,10},
			 {8,9,4,5},
			 {2,3,8,9},
		     {7,8,2,3},
			 {1,2,7,8}};
int main()
{
	int n;
	while(cin>>n)
	{
		fun(n);
		for(int i=0;i<5;i++)
			cout<<a[i][0]<<","<<a[i][1]<<"-->"<<a[i][2]<<","<<a[i][3]<<endl;
	}
	
}
