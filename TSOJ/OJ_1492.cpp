#include<iostream>
using namespace std;
int main()
{
	int n,k;
	while(cin>>n>>k)
	{
		int i;
		for(i=1;i<=20;i++)
		{
			int a=i*n;
			int b=200+k*i;
			if(a>=b)
			{
				cout<<i<<endl;
				break;
			}
		}
		if(i==21)  cout<<"Impossible"<<endl;
	}
	return 0;
}
