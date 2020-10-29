#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		unsigned int **a;
		
		a=(unsigned int**)malloc(sizeof(int*)*n);  
    	for(int i=0;i<n;i++)  
			a[i]=(unsigned int*)malloc(sizeof(int)*n);
    		
		for(int i=0;i<n;i++)
			for(int j=0;j<=i;j++)
				scanf("%d",&a[i][j]);
		for(int i=n-2;i>=0;i--)
		{
			for(int j=0;j<=n-2;j++)
			{
				a[i][j]+=(a[i+1][j] < a[i+1][j+1])?(a[i+1][j]):(a[i+1][j+1]);
			}
		}  
		printf("%d\n",a[0][0]);
		
		for(int i=0;i<n;i++)  
    		free(a[i]);
    	free(a);
	}
 	return 0; 
}
