#include<stdio.h>
#include<math.h>
#include<string.h>
int fun(int a,int b)
{
	int t;
	do
	{
		t=b%a;
		b=a;
		a=t;
	}while(t!=0);
	if(b==1) 
		return 1;
	else 
		return 0;
}
int main()
{
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==0)
			break;
		else
		{
		int a[n],t;
		for(int i=0;i<n;i++)  scanf("%d",&a[i]);
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1;j++)
			{
				if(a[j]>a[j+1])
				{
					t=a[j+1];
					a[j+1]=a[j];
					a[j]=t;
				}
			}
		}
		int sum=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(fun(a[i],a[j])==1)
					sum+=1;
			}
		}
		printf("%d",sum);
		printf("\n");
		}
	}
	return 0;
}






