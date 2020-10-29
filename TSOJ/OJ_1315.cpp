#include<iostream>
using namespace std;
int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		int a[m];
		for(int i=0;i<m;i++)
			a[i]=i+1;
		int x=0;
		for(int i=0;i<m;i++)
		{
			int y=0;
			while(y<n)
			{
				while(a[x]==0)   x=(x+1)%m; 
				y++;
				x=(x+1)%m;
			}
			if(x-1<0)  x=m;
			if(i==m-1)   cout<<a[x-1]<<endl;
			a[x-1]=0;//????????????0
		}
	}
	return 0;
}
