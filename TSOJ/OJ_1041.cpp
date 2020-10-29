#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 20
int main()
{
	int a[N];
	for(int i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<N-1;i++)
	{
		for(int j=0;j<N-1-i;j++)
		{
			int t;
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<N;i++)
		printf("%d\n",a[i]);
 	return 0; 
}
