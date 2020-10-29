#include<iostream>
using namespace std;
int main()
{
	const int N=10;
	int n;
	while(cin>>n)
	{
		long long int a[N][N][N],sum[N][N]={0};
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[0][i][j];
				
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				a[1][i][j]=a[0][n-1-j][i];//90
				
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				a[2][i][j]=a[1][n-1-j][i];//180
				
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				a[3][i][j]=a[2][n-1-j][i];//270
			
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				a[4][i][j]=a[0][i][j]+a[1][i][j]+a[2][i][j]+a[3][i][j];	
		int m;
		cin>>m;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				sum[i][j]+=a[4][i][j]*(m/4);
				switch(m%4)
				{
					case 0:sum[i][j]+=a[0][i][j];break;
					case 1:sum[i][j]+=a[0][i][j]+a[1][i][j];break;
					case 2:sum[i][j]+=a[0][i][j]+a[1][i][j]+a[2][i][j];break;
					case 3:sum[i][j]+=a[4][i][j];break;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-1;j++)
				cout<<sum[i][j]<<" ";
			cout<<sum[i][n-1]<<endl;
		}		
	}
	return 0;
}
