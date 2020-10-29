//分数数列2 
#include<iostream>
using namespace std;
int main()
{
	for(int n;cin>>n;)
	{
		int a[100000]={0};
		int x,y;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<100000;j++)
				if(a[j]==0)
				{
					x=j;
					break;
				}
			y=x+i;
			a[x]=1;
			a[y]=1;
		}
		cout<<x<<"/"<<x+n<<endl;
	}
	return 0;
}





