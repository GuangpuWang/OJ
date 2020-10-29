#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int *a;
		a=(int *)malloc(sizeof(int) *n);
		int max=0,num=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]>max)
			{
				max=a[i];
				num+=1;
			}
		}
		printf("%d\n",num);
		free(a);
	}
	return 0;
}
