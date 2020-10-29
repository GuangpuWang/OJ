#include<stdio.h>
#include<string.h>
#include<math.h>
void fun(int a[],int n)
{
	int t;
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int a[n],b[n];
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(int i=0;i<n;i++)
			scanf("%d",&b[i]);
		fun(a,n);
		fun(b,n);
		int m=0;
		for(int i=0;i<n;i++)
			m+=a[i]*b[n-1-i];
		printf("%d\n",m);
	}
	return 0;
}
